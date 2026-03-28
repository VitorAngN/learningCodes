num = 0
somaTotal = 0
while num >= 0:
    num = int(input("Digite um numero positivo"))
    if num > 0:
        somaTotal += num
print("Numero negativo!, soma total: ", somaTotal)