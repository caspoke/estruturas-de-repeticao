#include <stdio.h>
/*
"Escreva um programa que calcula a soma dos inteiros positivosmenores ou iguais a n,
sendo n um valor inteiro informado pelo usuário"
*/
int main() {
    int anoNasc;
    int anoAtual = 2023;
    do {
        printf("Digite seu ano de nsacimento: ");
        scanf("%d", &anoNasc);
    } while(anoNasc > anoAtual);
    printf("Seu ano de nascimento eh: %d", anoNasc);
    return 0;
}






