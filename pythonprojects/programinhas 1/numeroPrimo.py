num = int(input("Digite um número: "))

if num <= 1:
    print("Não é primo")
else:
    auxNum = 0
    for i in range(2, num):
        if num % i == 0:
            auxNum += 1
    if auxNum == 0:
        print("É primo")
    else:
        print("Não é primo")
        