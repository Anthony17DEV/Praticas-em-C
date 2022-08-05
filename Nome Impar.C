/*2- Faça um programa que receba um nome e imprima as letras na posição impar.
*/

#include<stdio.h>
#include<string.h>
int main(){
char nome[100];
int tam, cont;
printf("Digite seu nome: ");
gets (nome);
tam = strlen(nome);
for(cont= 0; cont<=tam; cont++){
if(cont%2!=0){
printf("%c ", nome[cont]);
}
}
return 0;
}
