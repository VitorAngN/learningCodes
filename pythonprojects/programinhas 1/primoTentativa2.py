numero = int(input("Digite um número: "))
if numero <= 2:
    print("O número não é primo.")
else:
    contador = 0
    for i in range(2, numero+1):
        if numero % i == 0:
            contador += 1
    if contador == 1:
        print("O número é primo.")
    else:
        print("O número não é primo.")
