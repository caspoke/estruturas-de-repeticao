#include <stdio.h>
/*
"Escreva um programa que calcula a soma dos inteiros positivosmenores ou iguais a n,
sendo n um valor inteiro informado pelo usuário"
*/
int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    int soma = 0;
    int i = 1;
    while(i<=n) {
        soma = soma + i;
        i++;
    }
    printf("A soma dos inteiros positivos de 1 a %d eh: %d", n, soma);
    return 0;
}






