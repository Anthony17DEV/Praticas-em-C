/*5- Faça um programa que receba um nome, calcule e mostre quantas letras tem.*/

#include<stdio.h>
#include<string.h>
main(){
char nome[1000];
int tam;
printf("Digite seu nome: ");
gets (nome);
tam = strlen(nome);
printf("Seu nome tem %d caracteres\n", tam);
return 0;
}
