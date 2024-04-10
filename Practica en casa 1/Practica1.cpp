#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){


float peso = 0, altura = 0, IMCMin170 = 18.5, IMCMax170= 24.9;

    float Resultado;

count << "Ingrese su peso en Kilos";

    cin >> peso;

count << "Ingrese su altura en Metros";

    cin >> altura;

    Resultado = peso /(altura * altura);

count << "este es tu IMC" << Resultado;
count << "Comparando con un IMC de referencia (para una altura de 1.70 m):"

    if(strcmp(IMCMin170,Resultado)>==0){
        count << "estas en el IMC minimo";
    }
    if(strcmp(IMCMin170,Resultado)!=0){
        count << "estas en el IMC adecuado";
    }

    if(strcmp(IMCMin170,Resultado) >0){
        count << "estas en el IMC maximo";
    }

    getch();
    return 0;

}
