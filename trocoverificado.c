#include <stdio.h>


int main(){

  int quantidade;
  double preco,dinheiro, troco, faltam;


  printf("Preco unitario do produto: ");
  scanf("%lf", &preco);
  printf("Quantidade comprada: ");
  scanf("%d", &quantidade);
  printf("Dinheiro recebido: ");
  scanf("%lf", &dinheiro);

   if (preco * quantidade > dinheiro){
     
      faltam = preco * quantidade - dinheiro;

     printf("Dinheiro Insuficiente, Faltam %.2lf reais", faltam);
   }

    else{
   
   troco = dinheiro - preco * quantidade;

     printf("Troco = %.2lf\n", troco);
   }





  return 0;
}