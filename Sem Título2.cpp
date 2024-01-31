#include <stdio.h>

 main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("A metade de %d é %d\n", num, num / 2);
    } else {
        printf("O dobro de %d é %d\n", num, num * 2);
    }

    return 0;
}

