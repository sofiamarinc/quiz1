/*
 Este problema recibe un numero entero y devuelve la suma de la potencia de sus digitos
 */
#include <iostream>

using namespace std;

int suma=0, temp=1, N, temp2, digit;

int main()
{
    cout<< "Ingrese un numero entero positivo";
    cin>>N;
   if (N<0){
       N*=-1; //si es negativo lo vuelve positivo
   }
   for(;N>0;(N/=10)&&(temp=1)){
       digit=(N%10);// captura un digito de N
       for (temp2=digit;temp2>0;--temp2){ //calcula la potencia de temp
           temp*=digit;
       }
       suma+=temp; //suma temp al resultado
   }
    cout << "La suma de la potencia de sus digitos es " << suma << endl;
    return 0;
}
