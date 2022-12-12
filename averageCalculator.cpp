#include<iostream>
using namespace std;
#include<locale>

void valoresCres(int a, int b);

void valoresDecres(int a, int b);


int main(){

    int valor1, valor2;

    setlocale(LC_ALL,"portuguese");

    cout << "Insira o 1º valor \n";
    cin >> valor1;
    cout << "Insira o 2º valor \n";
    cin >> valor2;

    !(valor1 > valor2) ? valoresCres(valor1, valor2) : valoresDecres(valor1, valor2);

    return 0;
}

void valoresCres(int a, int b){
    if(a == b)
        cout << "Valores iguais!\n";
    else{
        for( int i = a; i <= b; i++)
            cout << i << " ";
    }
}
void valoresDecres(int a, int b){
    if(a == b)
        cout << "Valores iguais!\n";
    else{
        for( int i = a; i >= b; i--)
            cout << i << " ";
    }
}
