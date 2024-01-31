#include <stdio.h>

 main() {
    float altura, pesoIdeal;
    int sexo;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("Digite seu sexo (1 para masculino ou 2 para feminino): ");
    scanf("%d", &sexo);

    if (sexo == 1) {
        pesoIdeal = (72.7 * altura) - 58;
        printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);
    } else if (sexo == 2) {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é: %.2f kg\n", pesoIdeal);
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}

