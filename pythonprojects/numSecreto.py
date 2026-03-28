nSecreto = 5
print("tente adivinhar o numero secreto irei dar dicas para você")
print("o número é maior que 0 e menor que 10")
num = int(input("digite o número:"))
if num == nSecreto:
    print("Parabéns você acertou o número secreto")
elif num < nSecreto:
    print("o número secreto é maior que o número digitado")
elif num > nSecreto:
    print("o número secreto é menor que o número digitado")
