numS = 0
numT = None
print("Adivinhe o número entre 1 e 10")
numS= int(input("Digite um número entre 1 e 10 para ser o numero correto: "))
while numT != numS:
    numT = int(input("Digite um número entre 1 e 10: "))
    if (numT < numS):
        print("o numero é 2maior que ", numT)
    elif (numT > numS): 
        print("o numero é menor que ", numT)

print("Parabéns, você acertou o número!")