#include <stdio.h>

 main() {
    int num;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("A metade de %d � %d\n", num, num / 2);
    } else {
        printf("O dobro de %d � %d\n", num, num * 2);
    }

    return 0;
}

