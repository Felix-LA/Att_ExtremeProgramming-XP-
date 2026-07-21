#include<stdio.h>

int main(){

    float valorTotal, valorPedido, valorGorjetaFinal, valorGorjeta;
    int quantidadeGarcon;
    printf("Informe o valor do pedido: ");
    scanf("%f", &valorPedido);
    printf("\n");
    printf("Informe o valor da gorjeta(5%,10%,15%,20%): ");
    scanf("%f", &valorGorjeta);
    if (valorGorjeta != 5 && valorGorjeta != 10 && valorGorjeta != 15 && valorGorjeta != 20)
    {
        printf("Digite um valor Valido\n");
    }
    else{
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
    }
    
    
    return 0;
};