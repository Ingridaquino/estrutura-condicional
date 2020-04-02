#include <stdio.h>

int main(){
  
  int hora1, hora2;
  
  printf("Hora inicial: ");
  scanf("%ld", &hora1);
  printf("Hora final: ");
  scanf("%d", &hora2);

  if(hora1 > hora2){
    printf("O JOFO DUROU %d HORA(S)\n", hora1 - hora2);
  }else{
    printf("O JOGO DUROU %d HORA(S)\n", 24 - (hora1 - hora2));
  }



  return 0;
}