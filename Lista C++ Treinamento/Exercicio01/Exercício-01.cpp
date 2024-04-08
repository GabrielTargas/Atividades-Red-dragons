//Exercicio 1 --> Gabriel Mello Silveira Targas
// RA : 812990

#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

//função que verifica se é numero primo --> Faz a divisão por todos os numeros entre
// 2 e numero-1. caso o resto da divisão seja 0, não é primo
//note que se for 1, não entra no for e será primo.
bool EhPrimo(int *number){
    for (int i = 2; i < *number; i++){
        if (*number % i == 0){
            return false;
        }
    }
    return true; //não teve divisão com resto zero
}


//função principal (main)
int main(){
    int *number = new int; //alocando dinamicamente memoria para inteiro 
    cout << "|Digite um Número:|" << endl;
    cin >> *number; //entrada do valor
    if (EhPrimo(number)){
        cout << "É número primo!" << endl;
    }
    else {
        cout << "Não é primo" << endl;
    }
    delete number; //desalocando memoria 
    return 0;
}
 // FIM DO EXERCICIO 1