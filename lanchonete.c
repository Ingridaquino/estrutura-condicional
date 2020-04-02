#include <stdio.h>

int main(){

  int prod, qtd;
  double valor;

  printf("Codigo do produto comprado; ");
  scanf("%d", &prod);
  printf("Quantidade comprada: ");
  scanf("%d", &qtd);


  if(prod == 1){
    valor = qtd * 5.00;
  }else if(prod == 2){
    valor = qtd * 3.00;
  }else if(prod == 3){
    valor = qtd * 4.80;
  }else if(prod == 4){
    valor = qtd * 8.90;
  }else if(prod == 5){
    valor = qtd * 7.32;
  }

  printf("Valor a pagar: %.2lf\n", valor);





  return 0;
}