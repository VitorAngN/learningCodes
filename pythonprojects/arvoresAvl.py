import sys

class elementoArvore(object):
    def __init__(self, chave):
        self.chave = chave
        self.esquerda = None
        self.direita = None
        self.altura = 1

class arvoreAVL(object):
    def inserir_elemento(self, raiz, chave):
        #insira o restante do código aqui
        if not raiz:
            return elementoArvore(chave)
        elif chave < raiz.chave:
            raiz.esquerda = self.inserir_elemento(raiz.esquerda, chave)
        else:
            raiz.direita = self.inserir_elemento(raiz.direita, chave)  
        raiz.altura = 1 + max(self.getAltura(raiz.esquerda), self.getAltura(raiz.direita))
    #atualiza o fator de balanceamento
        fatorBalanco = self.getFatorBalanco(raiz)
        # caso a árvore fique desbalanceada, existem 4 casos
        # caso 1 - esquerda esquerda
        if fatorBalanco > 1:
            if chave < raiz.esquerda.chave:
                return self.rotacaoDireita(raiz)
        # caso 2 - direita direita    
        elif fatorBalanco < -1:
            if chave > raiz.direita.chave:
                return self.rotacaoEsquerda(raiz)
        # caso 3 - esquerda direita
        elif fatorBalanco > 1:
            if chave > raiz.esquerda.chave:
                raiz.esquerda = self.rotacaoEsquerda(raiz.esquerda)
                return self.rotacaoDireita(raiz)
        # caso 4 - direita esquerda
        elif fatorBalanco < -1:
            if chave < raiz.direita.chave:
                raiz.direita = self.rotacaoDireita(raiz.direita)
                return self.rotacaoEsquerda(raiz)
        # retorna o ponteiro do nó (raiz) atualizado
        return raiz

    # Rotação à esquerda
    def rotacaoEsquerda(self, z):
        #insira o restante do código aqui
        y = z.direita
        T2 = y.esquerda
        # aposenta a rotação
        y.esquerda = z
        z.direita = T2
        # atualiza as alturas
        z.altura = 1 + max(self.getAltura(z.esquerda), self.getAltura(z.direita))
        y.altura = 1 + max(self.getAltura(y.esquerda), self.getAltura(y.direita))   
        # retorna o novo nó raiz
        return y        
    

    # Rotação à direita
    def rotacaoDireita(self, z):
        #insira o restante do código aqui
        y = z.esquerda
        T3 = y.direita
        # aposenta a rotação
        y.direita = z
        z.esquerda = T3
        # atualiza as alturas
        z.altura = 1 + max(self.getAltura(z.esquerda), self.getAltura(z.direita))   
        y.altura = 1 + max(self.getAltura(y.esquerda), self.getAltura(y.direita))   
        # retorna o novo nó raiz
        return y
    def getAltura(self, raiz):
        #insira o restante do código aqui
        if not raiz:
            return 0
        return raiz.altura
    def getFatorBalanco(self, raiz):
        #insira o restante do código aqui
        if not raiz:
            return 0
        return self.getAltura(raiz.esquerda) - self.getAltura(raiz.direita)
    def printArvore(self, printer, indent, ultimo, verificaRaiz=False):
        if printer != None:
            self.printArvore(printer.direita, indent + "     ", True)

            sys.stdout.write(indent)
            if verificaRaiz:
                sys.stdout.write("R----")
            elif ultimo:
                sys.stdout.write("D----")
            else:
                sys.stdout.write("E----")
            print(printer.chave)

            self.printArvore(printer.esquerda, indent + "     ", False)
minhaArvore = arvoreAVL()
raiz = None
valores = [9 ,2, 4, 8, 10, 6, 3]
for valor in valores:
    raiz = minhaArvore.inserir_elemento(raiz, valor)
print("Arvore AVL:")        
minhaArvore.printArvore(raiz, "", True, True)
















            