from fpdf import FPDF
import os
import urllib.request

# Baixar logo da UTFPR (substitua este link por um válido)
logo_url = "https://campus.gp.utfpr.edu.br/static/media/logo-utfpr.92fde9aa.png"
logo_path = "C:/Users/vitor/Documents/logo_utfpr.png"  # Caminho local para salvar o logo

# Tentar baixar a imagem
try:
    urllib.request.urlretrieve(logo_url, logo_path)
except Exception as e:
    print(f"Erro ao baixar a imagem: {e}")

# Classe customizada para PDF com cabeçalho e título
class PDFComLogo(FPDF):
    def header(self):
        self.image(logo_path, 10, 8, 33)
        self.set_font('Arial', 'B', 12)
        self.cell(0, 10, 'Joao Vitor Angelim Nogueira - RA: 2503662', ln=True, align='C')
        self.ln(10)

    def chapter_title(self, title):
        self.set_font('Arial', 'B', 12)
        self.cell(0, 10, title, ln=True)
        self.ln(2)

    def chapter_body(self, text):
        self.set_font('Arial', '', 11)
        self.multi_cell(0, 8, text)
        self.ln()

    def add_table(self, header, data):
        self.set_font("Arial", 'B', 11)
        col_widths = [max(len(str(item)) for item in col) * 2.8 for col in zip(*([header] + data))]
        for i, col_name in enumerate(header):
            self.cell(col_widths[i], 8, col_name, border=1, align='C')
        self.ln()
        self.set_font("Arial", '', 10)
        for row in data:
            for i, item in enumerate(row):
                self.cell(col_widths[i], 8, str(item), border=1, align='C')
            self.ln()
        self.ln()

# Criar PDF
pdf = PDFComLogo()
pdf.add_page()

# Exemplo 1
pdf.chapter_title("Teste de Mesa - Exemplo 1")
pdf.chapter_body("Código:\n#include <xc.h>\n#pragma config ...\n\nvoid main() {\n    TRISD = 0x00;\n    while(1) {\n        PORTD = 0x0F;\n    }\n}")
pdf.chapter_body("Tabela de Teste de Mesa:")
pdf.add_table(
    ["Linha", "Instrução", "Comentário", "PORTD"],
    [
        ["1", "TRISD = 0x00;", "Define todos os bits como saída", "--"],
        ["2", "PORTD = 0x0F;", "Liga bits 0 a 3 (00001111)", "0x0F"]
    ]
)

# Exercício 2
pdf.chapter_title("Teste de Mesa - Exercício 2")
pdf.chapter_body("Código:\nvoid main(void) {\n    TRISB = 0x00;\n    TRISD = 0x00;\n    int i;\n    for (i = 0; i < 10; i++) {\n        PORTD = i;\n        PORTC = ~(PORTD);\n        PORTB = !PORTD;\n    }\n}")
pdf.chapter_body("Tabela:")
pdf.add_table(
    ["i", "PORTD(dec)", "PORTD(hex)", "PORTD(bin)", "~PORTD(bin)", "PORTC(hex)", "!PORTD"],
    [
        ["0", "0", "0x00", "00000000", "11111111", "0xFF", "1"],
        ["1", "1", "0x01", "00000001", "11111110", "0xFE", "0"],
        ["2", "2", "0x02", "00000010", "11111101", "0xFD", "0"],
        ["3", "3", "0x03", "00000011", "11111100", "0xFC", "0"],
        ["4", "4", "0x04", "00000100", "11111011", "0xFB", "0"],
        ["5", "5", "0x05", "00000101", "11111010", "0xFA", "0"],
        ["6", "6", "0x06", "00000110", "11111001", "0xF9", "0"],
        ["7", "7", "0x07", "00000111", "11111000", "0xF8", "0"],
        ["8", "8", "0x08", "00001000", "11110111", "0xF7", "0"],
        ["9", "9", "0x09", "00001001", "11110110", "0xF6", "0"]
    ]
)

# Exercício 3
pdf.chapter_title("Teste de Mesa - Exercício 3")
pdf.chapter_body("Código:\nvoid main(void) {\n    TRISD = 0x00;\n    int i;\n    for (i = 0; i < 16; i++) {\n        if ((i & 0x05) == 0x05)\n            PORTDbits.RD0 = 1;\n        else\n            PORTDbits.RD0 = 0;\n    }\n}")
pdf.chapter_body("Tabela:")
pdf.add_table(
    ["i", "i(bin)", "i&0x05(bin)", "i&0x05(hex)", "Condicao", "RD0"],
    [
        ["0", "00000000", "00000000", "0x00", "Falso", "0"],
        ["1", "00000001", "00000001", "0x01", "Falso", "0"],
        ["2", "00000010", "00000000", "0x00", "Falso", "0"],
        ["3", "00000011", "00000001", "0x01", "Falso", "0"],
        ["4", "00000100", "00000100", "0x04", "Falso", "0"],
        ["5", "00000101", "00000101", "0x05", "Verdadeiro", "1"],
        ["6", "00000110", "00000100", "0x04", "Falso", "0"],
        ["7", "00000111", "00000101", "0x05", "Verdadeiro", "1"],
        ["8", "00001000", "00000000", "0x00", "Falso", "0"],
        ["9", "00001001", "00000001", "0x01", "Falso", "0"],
        ["10", "00001010", "00000000", "0x00", "Falso", "0"],
        ["11", "00001011", "00000001", "0x01", "Falso", "0"],
        ["12", "00001100", "00000100", "0x04", "Falso", "0"],
        ["13", "00001101", "00000101", "0x05", "Verdadeiro", "1"],
        ["14", "00001110", "00000100", "0x04", "Falso", "0"],
        ["15", "00001111", "00000101", "0x05", "Verdadeiro", "1"]
    ]
)

# Salvar PDF final
pdf_path_final = "C:/Users/vitor/Documents/teste_de_mesa.pdf"
pdf.output(pdf_path_final)