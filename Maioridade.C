/*Faça um programa que receba leia o nome e a idade de uma pessoa. Se a idade for
menor que 18, apresentar “Manor de idade”, caso contrário, apresentar “Maior de
idade”.
*/

#include<stdio.h>
#include<string.h>
main(){
char nome[100];
int idade;
printf("Digite seu nome: ");
gets (nome);
printf("Digite sua idade: ");
scanf("%d", &idade);
if(idade<18){
printf("Manor de idade\n");
}
else{
printf("Maior de idade\n");
}
return 0;
}
