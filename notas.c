#include <stdio.h>

int main (){

  double nota1, nota2, final;

  printf("Digite a priemira nota: ");
  scanf("%lf", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);

  final =  nota1 + nota2;

  if (final >= 60){

    printf("NOTA FINAL = %.2lf\n", final);
  }
  else {

    printf("REPROVADO");
  }




  return 0;
}