#include "Exercicio02.h"
#include <cmath>

Triangulo::Triangulo(int a,int b,int c){
    //construindo triangulo
    this->ladoA = a;
    this->ladoB = b;
    this->ladoC = c;

}

Triangulo::~Triangulo(){
 //destrutor de triangulo
}

bool Triangulo :: EhTriangulo(){
    //se a soma de dois lados for sempre maior que o terceiro, é triangulo.
    if(ladoA + ladoB > ladoC){
        if (ladoB + ladoC > ladoA){
            if(ladoA + ladoC > ladoB){
                cout << " É um triangulo!" << endl;
                return true;
            }
        }
    }
    //se parou em algum dos ifs, não é triangulo, e retorno falso.
    cout << "Não é um triângulo!!!" << endl;
    return false;
}

void Triangulo :: getTipo(){
    if ((ladoA == ladoB) && (ladoB == ladoC)){ //todos os lados iguais -> então é equilatero
        cout << "Tipo : triangulo Equilatero." << endl;
    }
    else{
        if ((ladoA != ladoB) && (ladoA != ladoC) && (ladoC != ladoB)){ //todos os lados diferentes -> então é escaleno
            cout << "Tipo : triangulo Escaleno." << endl;
        }
        else { // se não for nenhuma das duas opções acima, então pelo menos dois lados são iguais -> isóceles
            cout << "Tipo : triangulo Isóceles." << endl;
        }   
    }
}

double Triangulo::getArea(){
    //enconstrando semi perímetro:
    int p = (ladoA + ladoB + ladoC)/2;
    return sqrt(p*(p-ladoA)*(p-ladoB)*(p-ladoC));

}


//main --> função principal
int main(){
    int a, b, c;
    cout << "Insira o lado A: " << endl;
    cin >> a;
    cout << "Insira o lado B: " << endl;
    cin >> b;
    cout << "Insira o lado C: " << endl;
    cin >> c;

    //criando um triangulo dinamicamente 
    Triangulo *T1 = new Triangulo(a,b,c);
    
    if (T1 != NULL){ //verifica se foi possível alocar a memoria para criar o triangulo
        if (T1->EhTriangulo()){
            T1->getTipo();
            cout << "A area é: " << T1->getArea() << endl;
        }
    }
    delete T1;
    return 0;
}



