/*
 Este problema recibe un numero entero y devuelve la suma de la potencia de sus digitos
 */

using namespace std;

int main(){
  
  init();
// SETUP
 int suma=0;
 int temp=1;
 int N;
 int temp2;
 int digit;

  
  Serial.begin(9600);
  
 
  Serial.print("Ingrese un numero entero positivo");  

  // cin >> N;
  while (Serial.available()==0);
  N=Serial.parseInt();
 
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
  Serial.print("La suma de la potencia de sus digitos es ");
  Serial.println(suma);
  
  // FIN SETUP
  while(true){
    // LOOP
    // FIN LOOP
  }
  
  return 0;
}