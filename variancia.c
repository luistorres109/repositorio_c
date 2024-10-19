#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, inicial, final, modificado;

  printf("Escolha um numero como valor inicial: ");
  scanf("%d", &inicial);
  printf("\nEscolha um numero como valor final: ");
  scanf("%d", &final);

  if(inicial <= final){
    printf("\nQuanto esse intervalo sera modificado: ");
    scanf("%d", &modificado);
    system("clear||cls");
    printf("Valores sao: \n");
    for(i = inicial; i <= final; i += modificado){
      printf("\n%d", i);
    }
  }else{
    system("clear||cls");
    printf("Valores invalidos!");
  }

  return 0;
}
