#include <stdio.h>

 main() {
    float valor_compra, valor_venda, lucro;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    if (valor_compra < 20) {
        lucro = valor_compra * 0.45;
    } else {
        lucro = valor_compra * 0.3;
    }

    valor_venda = valor_compra + lucro;

    printf("Valor de venda: R$ %.2f\n", valor_venda);

    return 0;
}

