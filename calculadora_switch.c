#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, resultado;
    int valor;

    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("\nDigite um valor: ");
    scanf("%d", &b);
    system("clear||cls");

    printf("\nEscolha uma operacao");
    printf("\n 1 - Opcao de soma (+);");
    printf("\n 2 - Opcao de subtrair (-);");
    printf("\n 3 - Opcao de dividir (/);");
    printf("\n 4 - Opcao de multiplicar (*);");
    printf("\n\nDigite o valor da operacao: ");
    scanf("%d", &valor);
    system("clear||cls");

    switch(valor){
        case 1:
            resultado = a + b;
            break;
        case 2:
            resultado = a - b;
            break;
        case 3:
            resultado = a / b;
            break;
        case 4:
            resultado = a * b;
            break;
        default:
            break;
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}
