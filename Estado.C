/*Faça um programa que receba do teclado a sigla do estado de uma pessoa e
imprimir o estado correspondente. Dica: escolha apenas uma região brasileira
para fazer esse programa.*/

#include<stdio.h>
#include<string.h>
int main(){
char estado[2];
printf("Digite a sigla de um estado da regiao sul: ");
gets (estado);
if(estado[0]=='P' && estado[1]=='R'){
printf("Parana\n");
}
else if(estado[0]=='R' && estado[1]=='S'){
printf("Rio Grande do Sul\n");
}
else if(estado[0]=='S' && estado[1]=='C'){
printf("Santa Catarina\n");
}
return 0;
}
