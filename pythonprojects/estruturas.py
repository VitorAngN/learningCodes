#bubble sort
def bubble_sort(lista):
    n = len(lista)
    for i in range(n):
        for j in range(0, n-1):
            if lista[j] > lista[j+1]:
                aux = lista[j]
                lista[j] = lista[j+1]
                lista[j+1] = aux
    return lista

lista = [64, 34, 25, 12, 22, 11, 90]
print("Lista original:", lista)
sorted_lista = bubble_sort(lista)
print("Lista ordenada:", sorted_lista)
