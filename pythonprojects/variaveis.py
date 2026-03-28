umBoolean = True
umFloat = 12.2
umInteiro = 5
umaString = "string"
umaLista = [1, 2, 3, 4, 5] #lista de inteiros

print("Valor boooleano: ", umBoolean)
print("valor float: ", umFloat)
print("valor inteiro: ", umInteiro)
print("valor da string: ", umaString)
print("valor da lista: ", umaLista)
print("valor do inteiro:",umInteiro, "; valor do float:",umFloat) #usando o mesmo print para imprimir dois valores diferentes
print("valor do inteiro + float:", umInteiro + umFloat) #soma entre inteiro e float

print("utilizando inputs agora:")
umBoolean = input("digite o valor do booleano se true ou false: ")
umFloat = float(input("digite o valor do float: "))
umInteiro = int(input("digite o valor do inteiro: "))
umaString = input("digite o valor da string: ")
TamLista = int(input("digite o tamanho da lista: "))
umaLista = []
for i in range(TamLista):
    valor = int(input("digite o valor da lista: "))
    umaLista.append(valor) #adicionando valores a lista
print("Valor boooleano: ", umBoolean)
print("valor float: ", umFloat)
print("valor inteiro: ", umInteiro)
print("valor da string: ", umaString)
print("valor da lista: ", umaLista)

