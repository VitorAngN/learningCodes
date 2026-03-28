import math
while(True):
    print("======================")
    print("Menu da calculadora")
    print("======================")
    print("1. Adição")
    print("2. Subtração")
    print("3. Multiplicação")
    print("4. Divisão")
    print("5. resto")
    print("6. Potência")
    print("7. Raiz quadrada")
    print("8. Raiz cúbica")
    print("9 integral")
    print("10. Logaritmo")
    print("11. Seno")
    print("12. Cosseno")
    print("13. Tangente")
    print("14. Arcoseno")
    print("15. Arccoseno")
    print("16. Arctangente")
    print("17. Sair")
    print("======================")
    print("Escolha uma opção:")
    opcao = int(input())
    if opcao == 1:
        print("digite o primeiro número:")
        num1 = float(input())
        print("digite o segundo número:")
        num2 = float(input())
        resultado = num1 + num2
        print("Resultado da adição: ", resultado)
    elif opcao == 2:
        print("digite o primeiro número:")
        num1 = float(input())
        print("digite o segundo número:")
        num2 = float(input())
        resultado = num1 - num2
        print("Resultado da subtração: ", resultado)
    elif opcao == 3:
        print("digite o primeiro número:")
        num1 = float(input())
        print("digite o segundo número:")
        num2 = float(input())
        resultado = num1 * num2
        print("Resultado da multiplicação: ", resultado)
    elif opcao == 4:
        print("digite o primeiro número:")
        num1 = float(input())
        print("digite o segundo número:")
        num2 = float(input())
        if num2 == 0:
            print("divisão por zero não é permitida")
        else:
            resultado = num1 / num2
            print("Resultado da divisao: ", resultado)
    elif opcao == 5:
        print("digite o primeiro número:")
        num1 = float(input())
        print("digite o segundo número:")
        num2 = float(input())
        if num2 == 0:
            print("divisão por zero não é permitida")
        else:
            resultado = num1 % num2
            print("Resultado do resto: ", resultado)
    elif opcao == 6:
        print("digite o primeiro número:")
        num1 = float(input())
        print("digite o segundo número:")
        num2 = float(input())
        resultado = num1 ** num2
        print("Resultado da potencia: ", resultado)
    elif opcao == 7:
        print("digite o número:")
        num1 = float(input())
        resultado = num1 ** (1/2)
        print("Resultado da raiz quadrada: ", resultado)
    elif opcao == 8:
        print("digite o número:")
        num1 = float(input())
        resultado = num1 ** (1/3)
        print("Resultado da raiz cúbica: ", resultado)
    elif opcao == 9:
        print("agora é a integral")
        print("Faremos Integral definida")
        print("digite o termo inferior:")
        a = float(input())
        print("digite o termo superior:")
        b = float(input())
        print("digite a expressão a ser integrada:")
        print("exemplo: x**2 + 3*x + 2")
        print("use 'x' como variável")
        expr = input()
        print("digite o número de subintervalos:")
        n = int(input())

        h = (b - a) / n
        soma = 0
        for i in range(n):
            x = a + i * h
            soma += eval(expr.replace('x', str(x))) * h

        resultado = soma
        print("Resultado da integral definida: ", resultado)
        print("Resultado da integral definida: ", resultado)
    elif opcao == 10:
        print("digite o número:")
        num1 = float(input())
        if num1 <= 0:
            print("Logaritmo não definido para números menores ou iguais a zero.")
        else:
            print("digite a base do logaritmo:")
            base = float(input())
            if base <= 0 or base == 1:
                print("Base inválida. A base deve ser maior que zero e diferente de um.")
            else:
                resultado = math.log(num1, base)
                print("Resultado do logaritmo: ", resultado)
        resultado = math.log(num1)
        
        print("Resultado do logaritmo: ", resultado)
    elif opcao == 11:
        print("digite o número:")
        num1 = float(input())
        resultado = math.sin(num1)
        print("Resultado do seno: ", resultado)
    elif opcao == 12:
        print("digite o número:")
        num1 = float(input())
        resultado = math.cos(num1)
        print("Resultado do cosseno: ", resultado)
    elif opcao == 13:
        print("digite o número:")
        num1 = float(input())
        resultado = math.tan(num1)
        print("Resultado da tangente: ", resultado)
    elif opcao == 14:
        print("digite o número:")
        num1 = float(input())
        resultado = math.asin(num1)
        print("Resultado do arcoseno: ", resultado)
    elif opcao == 15:
        print("digite o número:")
        num1 = float(input())
        resultado = math.acos(num1)
        print("Resultado do arccoseno: ", resultado)
    elif opcao == 16:
        print("digite o número:")
        num1 = float(input())
        resultado = math.atan(num1)
        print("Resultado do arctangente: ", resultado)
    elif opcao == 17:
        print("Saindo...")
        break
    else:
        print("Opção inválida. Tente novamente.")
        