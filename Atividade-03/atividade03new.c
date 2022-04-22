#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, k, l, quant, num, repetido;
	int cartela[10]; 
	
	repetido = 0;
	
	printf("Informe a quantidade de cartelas a serem criadas: ");
	scanf("%d", &quant);
	
	srand(time(NULL));
	
	for(i=1;i<=quant;i++){
		printf("\n");
		printf("\n cartela %d\n", i);
		printf("\n");
	
		for(j=0;j<10;j++){
			num = rand() %99;
			
			for(k=0;k<=j-1;k++){
				if(num == cartela[k]){
					repetido = 1;
					break;
				}
			}
					
			if(repetido == 1){
				repetido = 0;
				j = j - 1;
			}
			else{
				cartela[j] = num;	
			}
		}
		
		for(l=0;l<10;l++){
			printf("%d ", cartela[l]);
		}
		printf("\n");
	}
	return 0;
}
