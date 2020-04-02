#include <stdio.h>
#include <math.h>

int main(){

  double salario1, salario2, aumento;
  int porce;

  printf("Digite o salario da pessoa: ");
  scanf("%lf", &salario1);

  if(salario1 <= 1000.00){
    porce = 20;
    aumento = salario1 * porce / 100;
    salario2 = salario1 + aumento;
    }else if(salario1 > 1000.00){
    porce = 15;
    aumento = salario1 * porce / 100;
    salario2 = salario1 + aumento;
    }else if(salario1 <= 3000.00){
    porce = 10;
    aumento = salario1 * porce / 100;
    salario2 = salario1 + aumento;
    }else{
    porce = 5;
    aumento = salario1 * porce / 100;
    salario2 = salario1 + aumento;
    }

    printf("Novo salario = R$%.2lf\n", salario2);
    printf("Aumento = R$%.2lf\n", aumento);
    printf("Porcentagem = %ld %%\n", porce);




  return 0;
}