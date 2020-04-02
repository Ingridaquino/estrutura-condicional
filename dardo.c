#include <stdio.h>

int main(){

  double a, b, c, maior;

  printf("Digite as tres distancias: ");
  scanf("%lf %lf %lf", &a, &b, &c);

  if(a > b && a > c){

    maior = a;  
  }

  else if(b > c){

    maior = b;
  
  }

  else 

    maior = c;


  printf("Maior distancia = %.2lf\n", maior);







  return 0;
}