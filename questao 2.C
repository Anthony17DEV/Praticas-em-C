#include <stdio.h>

int main(){
	
	int eleitor, idade = 0;
	
	for(eleitor = 1;eleitor <= 10;eleitor++)
	{	
		
		printf("Digite a idade do eleitor: \n");
		scanf("%d",&idade);
		
		if (idade < 16){
			printf("Not eleitor\n");
			
		}
		else if(idade>=16 && idade<=18 || idade>65)
		{
			printf("Eleitor facultativo\n");
			
		}
		else if(idade >= 18 && idade <= 65)
		{
			printf("Eleitor obrigatorio\n");
			
		}
	}
	
}
