#include <iostream>

using namespace std;

int main(){

    int nota1, nota2, nota3;
    double resultado;

    cout << "ingrese la primera nota";
    cin >> nota1;
    cout << "ingrese la segunda nota";
    cin >> nota2;
    cout << "ingrese la tercera nota";
    cin >> nota3;

    resultado = (nota1+nota2+nota3)/3;

    cout << "el promedio de los 3 es: " << resultado << endl;
return 0;
}
