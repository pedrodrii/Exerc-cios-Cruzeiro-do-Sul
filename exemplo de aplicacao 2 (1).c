#include <stdio.h>

int main()
{
    int quantidade_cafe;
    float preco, total;
    
    printf("Digite a quantidade de cafés: ");
    scanf("%d", &quantidade_cafe);
    
    printf("Digite o preço do café ");
    scanf("%f", &preco);
    
    total = preco*quantidade_cafe;
    
    printf("o valor total da conta será R$ %.2f", total);
    
    return 0;
}