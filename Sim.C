/*Fazer uma rotina que aguarda um string do teclado e retorna o valor 1 se o string
digitado foi "SIM" e 0 se o string digitado foi "NAO". A rotina só deve retornar
alguma coisa se o string digitado for "SIM" ou "NAO".*/

#include<stdio.h>
#include<string.h>
int main(){
char str[10];
printf("Digite SIM para 1 e NAO para 0: ");
gets (str);
if(str[0] == 'S' && str[1] == 'I' && str[2] == 'M'){
printf("1\n");
}
else if(str[0] == 'N' && str[1] == 'A' && str[2] == 'O'){
printf("0\n");
}
return 0;
}
