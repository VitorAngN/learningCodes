import matplotlib.pyplot as plt
import matplotlib.animation as animation
import numpy as np

# Gerar lista aleatória de 50 elementos
np.random.seed(42)
data = np.random.randint(1, 100, 50)
n = len(data)

fig, ax = plt.subplots(figsize=(10, 6))
ax.set_title("Bubble Sort - Animação")
bar_rects = ax.bar(range(n), data, color='royalblue')
ax.set_xlim(0, n)
ax.set_ylim(0, int(max(data) * 1.1))
text = ax.text(0.02, 0.95, "", transform=ax.transAxes)

def bubble_sort_gen(data):
    data = data.copy()
    for i in range(len(data)):
        for j in range(len(data) - i - 1):
            if data[j] > data[j + 1]:
                data[j], data[j + 1] = data[j + 1], data[j]
            yield data, j, j + 1
    yield data, -1, -1

generator = bubble_sort_gen(data)

def update(frame):
    values, idx1, idx2 = frame
    for rect, val in zip(bar_rects, values):
        rect.set_height(val)
        rect.set_color('royalblue')
    if idx1 >= 0 and idx2 >= 0:
        bar_rects[idx1].set_color('crimson')
        bar_rects[idx2].set_color('crimson')
    text.set_text("Ordenando...")
    return list(bar_rects) + [text]

ani = animation.FuncAnimation(
    fig, update, frames=generator, repeat=False, save_count=300
)

output_path = "C:/Users/vitor/Documents/bubble_sort_animation.gif"
ani.save(output_path, writer='pillow', fps=10)
plt.close()

print(f"GIF salvo em: {output_path}")