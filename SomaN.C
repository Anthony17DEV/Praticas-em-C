#include <stdio.h>

int main(){
	
	float n,i,soma,resultado=0;
	
	printf("Digite um numero:\n");
	scanf("%f",&n);
	
	if(n<0){
		printf("Numero Invalido.\n");
	}
	else if(n>=0){
		for(i=1;i<=n;i++){
			soma = i/(i*i);
			resultado = resultado + soma;
		}
		printf("%.2f\n",resultado);
	}
	
	return 0;
}
