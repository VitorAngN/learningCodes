nota1 = float(input("digite a primeira nota: "))
nota2 = float(input("digite a segunda nota: "))
nota3 = float(input("digite a terceira nota: "))

media = (nota1 + nota2 + nota3) / 3
if media >= 9:
    print("Excelente")
elif media >= 7:
    print("Bom")
elif media >= 5:
    print("regular")
else:
    print("reprovado")
print("A média é: ", media)

