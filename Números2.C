#include<stdio.h>

int main(){
	
	
 int num;
 printf("INFORME UM NUMERO ENTRE 1 e 4:\n ");
 scanf("%d",&num);
 while(num<1||num>4)
 {
 printf("O NUMERO DIGITADO ESTA INCORRETO. DIGITE NOVAMENTE: \n");
 scanf("%d",&num);
 }
 printf("O NUMERO DIGITADO E:%d \n",num);
 printf("\n\n");
 return(0);
 }
