print ("\n\nLista 01 --> Exercicios básicos em python\n")
print ("Nome: Gabriel Mello Silveira Targas ")
print ("RA: 812990")

print("\n-------------------------EXERCÍCIO 2 ----------------------------\n")

#chamando biblioteca numpy como np:
import numpy as np

#criando função "rotaciona"
def Rotaciona(vetor, Rad):
    #criando a matriz de rotação R
    R = np.array([[np.cos(Rad), -np.sin(Rad)],
                 [np.sin(Rad), np.cos(Rad)]])
    
    #transformando meu vetor numa matriz de duas linhas e uma coluna
    V = np.array([[vetor[0]], [vetor[1]]]) 
    
    #realizando a multiplicação de matrizes:
    VetorMatriz = np.dot(R,V) #"Vetor" na forma de matriz, resultado da multiplicação
    vetor[0] = VetorMatriz[0][0] #substituindo os valores no vetor original
    vetor[1] = VetorMatriz[1][0]
    return vetor
#fim da função rotaciona

#inserção de coordenadas:
x1 = float(input("insira a coordenada X1 do vetor:"))
y1 = float(input("insira a coordenada Y1 do vetor:"))
#vetor criado com entradas:
vetor = np.array([x1, y1])
Rad = float(input("inisra o angulo de rotação"))
VetorCopia = vetor
VetorCopia = Rotaciona(VetorCopia, Rad)
print("O vetor original é:", vetor)
print("O vetor após a rotação é:", VetorCopia)