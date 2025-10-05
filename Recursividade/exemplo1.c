# include <stdio.h>

void recursivo(int numero)
{
    if (numero > 0)
    {
        printf("%d \t", numero);

        recursivo(numero - 1);
    }
}

int main (){

    int quantidade = 10;

    printf("Contagem Regressiva...");
    recursivo(quantidade);

    return 0;
}