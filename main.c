#include<stdio.h>

int main(){

    float valorTotal, valorPedido, valorGorjetaFinal, valorGorjeta;
    int quantidadeGarcon;
    printf("Informe o valor do pedido: ");
    scanf("%f", &valorPedido);
    printf("\n");
    printf("Informe o valor da gorjeta: ");
    scanf("%f", &valorGorjeta);
    valorGorjeta = valorGorjeta / 100;
    printf("Informe a quantidade de garçons: ");
    scanf("%d", &quantidadeGarcon);
    printf("\n");

    valorGorjetaFinal = (valorPedido * valorGorjeta) / quantidadeGarcon;
    valorTotal = (valorPedido * valorGorjeta) + valorPedido;
    printf("O valor de cada gorjeta por garçom é: %.2f ", valorGorjetaFinal);
    printf("\n");
    printf("O valor final da conta é: %.2f", valorTotal);
    printf("\n");
    return 0;
};