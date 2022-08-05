#include<stdio.h>

int main(){
	
 int num;
 printf("INFORME UM NUMERO ENTRE 100 e 200:\n ");
 scanf("%d",&num);
 while(num<100||num>200)
 {
 printf("VOCE DIGITOU UM NUMERO FORA DA FAIXA ENTRE 100 E 200. DIGITE NOVAMENTE: \n");
 scanf("%d",&num);
 }
 printf("O NUMERO DIGITADO E:%d \n",num);
 printf("\n\n");
 return(0);
 }
