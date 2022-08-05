#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s1[20], s2[20];

void op1() {putchar('a');}
void op2() {putchar('b');}
void op3() {putchar('c');}
void op4() {putchar('d');}
void op5() {putchar('e');}
void op6() {putchar('f');}

int main ( void ) {
    char op = 0;

    while(op!='s'){
        printf("Escolha uma opcao:\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
  		"(a) Imprimir o tamanho da string S1;",
        "(b) Comparar a string S1 com uma nova string S2",
        "(c) Concatenar a string S1 com uma nova string S2",
        "(d) Imprimir a string S1 de forma reversa;",
        "(e) Contar quantas vezes um dado caractere aparece na string S1.",
        "(f) Torne os valores da string S todos em maiusculos.",
        
        
        "(s) SAIR"
        );
        
        scanf("%c%*c", &op);
        system("cls");
        switch(op){
            case 'a':op1();
            break;
            case 'b':op2();
            break;
            case 'c':op3();
            break;
            case 'd':op4();
            break;
            case 'e':op5();
            break;
            case 'f':op6();
            break;
            case 's':op = 's';printf("baybay!");
            break;
            default:
            break;    
        }
        printf("\nAperte uma tecla para continuar!");
        getchar();
        system("cls");
    }
    
    return 0;
}
