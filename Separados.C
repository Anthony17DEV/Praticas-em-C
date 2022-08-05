/*Faça um programa que receba uma string contendo palavras separadas por um
espaço em branco cada e as imprime uma abaixo das outras.*/

#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
int cont,tam;
gets (str1);
tam = strlen(str1);
for(cont =0; cont<=tam; cont++){
printf("%c", str1[cont]);
if(str1[cont] == ' '){
printf("\n");
}
}
return 0;
}
