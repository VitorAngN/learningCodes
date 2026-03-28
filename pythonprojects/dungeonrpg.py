import tkinter as tk
from tkinter import messagebox

GRID_SIZE = 5
FINAL_POSITIONS = {
    'R1': (0, 1),
    'R2': (0, 3),
    'R3': (1, 0),
    'R4': (1, 4),
    'R5': (3, 1),
    'R6': (3, 3),
}

CENTER_POS = (1, 2)

INITIAL_POSITIONS = {
    'R1': (4, 0),
    'R2': (2, 1),
    'R3': (3, 3),
    'R4': (3, 4),
    'R5': (4, 2),
    'R6': (4, 3),
}

class PuzzleApp:
    def __init__(self, root):
        self.root = root
        self.status_var = tk.StringVar()
        self.status_var.set("Bem-vindo ao Puzzle da Trama Estilhaçada.")
        self.status_bar = tk.Label(self.root, textvariable=self.status_var, anchor="w", relief="sunken")
        self.status_bar.grid(row=GRID_SIZE+1, column=0, columnspan=GRID_SIZE, sticky="we")
        self.root.title("Puzzle da Trama Estilhaçada")
        self.buttons = [[None for _ in range(GRID_SIZE)] for _ in range(GRID_SIZE)]
        self.grid = [[' ' for _ in range(GRID_SIZE)] for _ in range(GRID_SIZE)]
        self.selected_piece = None
        self.create_widgets()
        self.reset_grid()

    def create_widgets(self):
        for i in range(GRID_SIZE):
            for j in range(GRID_SIZE):
                btn = tk.Button(self.root, text=' ', width=6, height=3,
                                command=lambda x=i, y=j: self.select_piece(x, y))
                btn.grid(row=i, column=j)
                self.buttons[i][j] = btn

        control_frame = tk.Frame(self.root)
        control_frame.grid(row=GRID_SIZE, column=0, columnspan=GRID_SIZE)

        tk.Button(control_frame, text="↑", command=lambda: self.move_piece(-1, 0)).grid(row=0, column=1)
        tk.Button(control_frame, text="←", command=lambda: self.move_piece(0, -1)).grid(row=1, column=0)
        tk.Button(control_frame, text="→", command=lambda: self.move_piece(0, 1)).grid(row=1, column=2)
        tk.Button(control_frame, text="↓", command=lambda: self.move_piece(1, 0)).grid(row=2, column=1)
        tk.Button(control_frame, text="Reiniciar", command=self.reset_grid).grid(row=1, column=1)

    def reset_grid(self):
        for i in range(GRID_SIZE):
            for j in range(GRID_SIZE):
                self.grid[i][j] = ' '
        self.grid[CENTER_POS[0]][CENTER_POS[1]] = 'C'
        for piece, (x, y) in INITIAL_POSITIONS.items():
            self.grid[x][y] = piece
        self.update_buttons()

    def update_buttons(self):
        for i in range(GRID_SIZE):
            for j in range(GRID_SIZE):
                text = self.grid[i][j]
                btn = self.buttons[i][j]
                btn.config(text=text)
                btn.config(bg="SystemButtonFace")
                if text in FINAL_POSITIONS:
                    final_x, final_y = FINAL_POSITIONS[text]
                    if (i, j) == (final_x, final_y):
                        btn.config(bg="gold")
        self.check_victory()

    def select_piece(self, x, y):
        if self.grid[x][y].startswith('R'):
            self.selected_piece = (self.grid[x][y], x, y)

    def move_piece(self, dx, dy):
        if not self.selected_piece:
            return
        piece, x, y = self.selected_piece
        new_x, new_y = x + dx, y + dy

        if not self.valid_move(new_x, new_y):
            self.status_var.set("Movimento inválido!")
            return

        self.grid[new_x][new_y] = piece
        self.grid[x][y] = ' '

        pairs = self.find_pieces()

        msg = f"{piece} moveu."

        # Movimentos vinculados
        if piece == 'R1':
            if 'R2' in pairs:
                self.try_move_piece('R2', dx, dy, pairs)
                msg += " R2 foi junto."
        elif piece == 'R2':
            if 'R1' in pairs:
                self.try_move_piece('R1', dx, dy, pairs)
                msg += " R1 foi junto."
            if 'R3' in pairs:
                self.try_move_piece('R3', dx, dy, pairs)
                msg += " R3 foi junto."
        elif piece == 'R3':
            if 'R6' in pairs:
                self.try_move_piece('R6', dx, dy, pairs)
                msg += " R6 foi junto."
        elif piece == 'R6':
            if 'R3' in pairs:
                self.try_move_piece('R3', dx, dy, pairs)
                msg += " R3 foi junto."
        elif piece == 'R4':
            if 'R1' in pairs:
                self.try_move_piece('R1', dx, dy, pairs)
                msg += " R1 foi junto."
            if 'R2' in pairs:
                self.try_move_piece('R2', dx, dy, pairs)
                msg += " R2 foi junto."
            msg += " A energia da trama ressoou!"
        elif piece == 'R5':
            if 'R6' in pairs:
                self.try_move_piece('R6', dx, dy, pairs)
                msg += " R6 foi junto."
            if 'R1' in pairs:
                self.try_move_piece('R1', dx, dy, pairs)
                msg += " R1 foi junto."
            msg += " Uma força oculta agitou as peças!"

        self.selected_piece = None
        self.update_buttons()
        self.status_var.set(msg)


    def try_move_piece(self, target, dx, dy, positions):
        if target in positions:
            x, y = positions[target]
            new_x, new_y = x + dx, y + dy
            if self.valid_move(new_x, new_y):
                self.grid[new_x][new_y] = target
                self.grid[x][y] = ' '

    def valid_move(self, x, y):
        return (0 <= x < GRID_SIZE and 0 <= y < GRID_SIZE and
                self.grid[x][y] == ' ')

    def find_pieces(self):
        positions = {}
        for i in range(GRID_SIZE):
            for j in range(GRID_SIZE):
                if self.grid[i][j].startswith('R'):
                    positions[self.grid[i][j]] = (i, j)
        return positions

    def check_victory(self):
        positions = self.find_pieces()
        for piece, final_pos in FINAL_POSITIONS.items():
            if piece not in positions or positions[piece] != final_pos:
                return
        # Se passou por todos, vitória!
        messagebox.showinfo("Sucesso!", "BOA, pausa para o café 10 minutim, vou arrumar um ngcinho aqui")

if __name__ == "__main__":
    root = tk.Tk()
    app = PuzzleApp(root)
    root.mainloop()
