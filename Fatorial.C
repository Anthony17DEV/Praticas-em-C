#include <stdio.h>

int main(){
	
	int fat, n;
	
	printf("Insira um valor que deseja calcular o fatorial:");
	scanf("%d",&n);

	if(n<0){
		printf("Numero negativo");
		return 1;
	}
	
	for(fat = 1; n > 1; n = n - 1)
		fat = fat * n ;
	
	printf("\nFatorial calculado: %d", fat);
	return 0;
	
}
