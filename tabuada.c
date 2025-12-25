#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, resultado;
  for(i = 1; i <= 10; i++){
    printf("Tabuada do %d:\n", i);
    for(j = 1; j <= 10; j++){
      resultado = i * j;
      printf("- %d X %d = %d\n", i, j, resultado);
    }
  }
  return 0;
}
