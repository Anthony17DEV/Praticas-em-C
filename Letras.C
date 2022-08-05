/*1- Faça um programa que receba um nome e imprima as 4 primeiras letras do nome.
*/

#include<stdio.h>
#include<string.h>
main(){
char s1[4];
gets (s1);
printf("%.4s\n", s1);
return 0;
}
