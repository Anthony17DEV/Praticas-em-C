/*Faça um programa que receba um nome e imprima o nome somente se a primeira
letra do nome for “a” (maiúscula ou minúscula).*/

#include<stdio.h>
#include<string.h>
int main(){
char nome[100];
printf("Digite seu nome: ");
gets (nome);
switch(nome[0]){
case 'A':
printf("%s", nome);
break;
case 'a':
printf("%s", nome);
break;
}
return 0;
}
