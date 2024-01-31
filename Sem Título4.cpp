#include <stdio.h>

main() {
    float salario, novo_salario;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    if (salario < 10000) {
        novo_salario = salario * 1.55;
    } else if (salario >= 10000 && salario <= 25000) {
        novo_salario = salario * 1.2;
    } else {
        novo_salario = salario * 1.15;
    }

    printf("O novo salario e: R$ %.2f\n", novo_salario);

    return 0;
}

