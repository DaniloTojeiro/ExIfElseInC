//Construir um programa em C que leia 3 notas, calcule e mostre a média e o conceito segundo as condições abaixo:
/* A-> 8.1 - 10
B-> 6.1 - 8.0
C-> 4.1 - 6.0
D-> 2.1 - 4.0
E-> 0 - 2.0*/

#include <stdio.h>
#include <locale.h>

 main() {
 	setlocale(LC_ALL, "");
 	
    float nota1, nota2, nota3, media;
    char conceito;


    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: \n");
    scanf("%f", &nota3);


    media = (nota1 + nota2 + nota3) / 3;


    if (media >= 8.1) {
        conceito = 'A';
    } else if (media >= 6.1) {
        conceito = 'B';
    } else if (media >= 4.1) {
        conceito = 'C';
    } else if (media >= 2.1) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("Média: %.1f\n", media); 
    printf("Conceito: %c\n", conceito);
    
    

    return 0;
}


