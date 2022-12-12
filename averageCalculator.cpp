#include<iostream>
using namespace std;
#include<locale>

float mediaArit(float, float, float);

float mediaPond(float, float, float, float, float, float);

float mediaHarm(float, float, float);


int main(){

    float valor1, valor2, valor3, p1, p2, p3;
    int selecao;

    setlocale(LC_ALL,"portuguese");

    cout << "****CALCULADORA DE MEDIAS**** \n";
    cout << "\n______________________________________________\n";
    cout << "Insira o caractere respectivo a media desejada: \n";
    cout << "1: Media Aritmetica \n2: Media Ponderada \n3: Media Harmonica \n0: Sair\n";
    cout << "______________________________________________\n";
    cin >> selecao;
    while(selecao != 0){

        switch(selecao){
            case(1):
                cout << "Insira o primeiro valor: \n";
                cin >> valor1;
                cout << "Insira o segundo valor: \n";
                cin >> valor2;
                cout << "Insira o terceiro valor: \n";
                cin >> valor3;
                cout << "Valor da Media Aritmetica: ";
                cout << mediaArit(valor1, valor2, valor3);
                break;
            case(2):
                cout << "Insira o primeiro valor: \n";
                cin >> valor1;
                cout << "Insira o primeiro peso: \n";
                cin >> p1;
                cout << "Insira o segundo valor: \n";
                cin >> valor2;
                cout << "Insira o segundo peso: \n";
                cin >> p2;
                cout << "Insira o terceiro valor: \n";
                cin >> valor3;
                cout << "Insira o terceiro peso: \n";
                cin >> p3;
                cout << "\nValor da Media Ponderada: ";
                cout << mediaPond(valor1, valor2, valor3, p1, p2, p3);
                break;
            case(3):
            cout << "Insira o primeiro valor: \n";
                cin >> valor1;
                cout << "Insira o segundo valor: \n";
                cin >> valor2;
                cout << "Insira o terceiro valor: \n";
                cin >> valor3;
                cout << "Valor da Media Harmonica: ";
                cout << mediaHarm(valor1, valor2, valor3);
                break;
            default:
                cout << "Entrada nao correspondente!";
            }

        cout << "\n\n______________________________________________\n";
        cout << "Insira o caractere respectivo a m�dia desejada: \n";
        cout << "1: Media Aritmetica \n2: Media Ponderada \n3: Media Harmonica \n0: Sair\n\n";
        cout << "______________________________________________\n";
        cin >> selecao;
    }

    return 0;
}  
float mediaArit(float a, float b, float c){
    float valorMediaArit;

    valorMediaArit = (a + b + c)/3;

    return valorMediaArit;
}

float mediaPond(float x, float y, float z, float px, float py, float pz){
    float valorMediaPond;

    valorMediaPond = (px*x + py*y + pz*z)/(px+py+pz);

    return valorMediaPond;
}

float mediaHarm(float m, float n, float o){
    float valorMediaHarm;

    valorMediaHarm = 3 / ((1/m)+(1/n)+(1/o));

    return valorMediaHarm;
}


