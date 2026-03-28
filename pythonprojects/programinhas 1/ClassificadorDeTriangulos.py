comprimento1 = int(input("Digite o comprimento do primeiro lado do triângulo: "))
comprimento2 = int(input("Digite o comprimento do segundo lado do triângulo: "))
comprimento3 = int(input("Digite o comprimento do terceiro lado do triângulo: "))
if ((comprimento1 + comprimento2) > comprimento3) & ((comprimento1 + comprimento3) > comprimento2) & ((comprimento2 + comprimento3) > comprimento1):
    print("é um triângulo.")
    if comprimento1 == comprimento2 and comprimento2 == comprimento3:
        print("É um triângulo equilátero.")
    elif comprimento1 == comprimento2 or comprimento1 == comprimento3 or comprimento2 == comprimento3:
        print("É um triângulo isósceles.")
    else:
        print("É um triângulo escaleno.")
    print("???TRIANGULO INVÁLIDO???")

