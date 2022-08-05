/*Faça um programa que lê o nome e o valor de uma determinada mercadoria de uma
loja. Sabendo que o desconto para pagamento a vista é de 10% sobre o valor total,
calcular o valor a ser pago à vista. Escrever o nome da mercadoria, o valor total, o valor
do desconto e o valor a ser pago à vista.*/

#include <stdio.h>
int main(){
  float valori, descont, valorf;
  
  printf ("Didite o valor da mercadoria\n");
  scanf ("%f", &valori);
  printf ("Digite o valor do desconto (valor da porcentagem)\n");
  scanf ("%f", &descont);
   
  printf ("O valor do desconto e de: %.2f por cento", descont);

  valorf = valori - (descont/100 * valori);
  printf ("\n\n");
  printf ("O novo valor da mercadoria com desconto e R$: %2.f", valorf);

return 0;
}
