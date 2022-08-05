/*O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um
tipo de substituição na qual cada letra do texto é substituída por outra, que se
apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma
troca de três posições, ‘A’ seria substituída por ‘D’, ‘B’ se tornaria ‘E’, e assim por
diante. Implemente um programa que faça uso desse Código de César (3 posições),
entre com uma string e retorne a string codificada.*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char texto[1000];
    int i;
    
    printf("Digite uma frase: ");
    scanf(" %999[^\n]", texto);
    getchar();
    
    for(i=0; texto[i] != '\0'; i++) {
        if (isalpha(texto[i])){ //Se o caractere eh uma letra
            texto[i] = toupper(texto[i]) + 3; //Deixa maiuscula e soma 3
            if (texto[i] > 'Z'){ //Se passou da letra Z
                texto[i] = texto[i] - 'Z' + 'A' - 1; //Tira Z e soma o que sobrou a A-1
            }
        }
    }
    
    printf("%s", texto);
    
    return 0;
}
