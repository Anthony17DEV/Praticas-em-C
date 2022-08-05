/*Faça um programa que receba uma string do teclado e imprima a string de maneira
normal e de tráz para diante.*/

#include<stdio.h>
#include<string.h>
int main(){
char str1[1000];
int tam, cont;
printf("Digite uma string: ");
gets (str1);
tam = strlen(str1);
printf("%s\n", str1);
for(cont=tam-1; cont>=0; cont--){
printf("%c", str1[cont]);
}
return 0;
}
