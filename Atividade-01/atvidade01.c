#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int op, vervoto, ver1, ver2, ver3, vernulo, prefvoto, pref1, pref2, prefnulo;

int main(int argc, char *argv[]) {
	
	printf("O que voce deseja fazer ?\n");
	printf("1 - votar\n");
	printf("2 - apuracao dos votos\n");
	printf("3 - sair\n");
	scanf("%d", &op);
	
	while (op == 1){
		
		printf("Qual seu voto para vereador ?\n");
		printf("111 - Vereador Joao do Frete\n");
		printf("222 - Vereador Maria da Pamonha\n");
		printf("333 - Vereador Ze da Farmacia\n");
		printf("444 - Voto Nulo\n");
		scanf("%d", &vervoto);
			
		if (vervoto == 111){
			ver1++;
			printf("voto computado!\n");
		} 
		else {
			if (vervoto == 222) {
			ver2++;
			printf("voto computado!\n");
			} 
			else {
				if (vervoto == 333) {
				ver3++;
				printf("voto computado!\n");
				}
				else {
					if (vervoto == 444) {
					vernulo++;
					printf("voto computado!\n");
					}
					else {
					printf("Numero invalido. Seu voto foi invalidado!\n");
					}
				}	
			}
		}	
			
		printf("Qual seu voto para prefeito ?\n");
		printf("11 - Prefeito Dr. Zureta\n");
		printf("22 - Prefeito Senhor Gomes\n");
		printf("44 - Voto Nulo\n");
		scanf("%d", &prefvoto);
			
		if (prefvoto == 11){
		pref1++;
		printf("voto computado!\n");
		} 
		else {
			if (prefvoto == 22) {
			pref2++;
			printf("voto computado!\n");
			} 
			else {
				if (prefvoto == 44) {
				prefnulo++;
				printf("voto computado!\n");
				}
				else {
				printf("Numero invalido. Seu voto foi invalidado!\n");
				}	
			}
		}
			
		printf("O que voce deseja fazer ?\n");
		printf("1 - votar\n");
		printf("2 - apuracao dos votos\n");
		printf("3 - sair\n");
		scanf("%d", &op);
		system("cls");
		
		while(op == 2){ //ao digitar 2 ele mantém na tela de apuração. Se feito com "if" ao digitar 2 o programa se encerra.
			system("cls");
			printf("----------------------------\n");
			printf("Apuracao Vereador Final: \n");
			printf("Vereador Joao do Frete - %d \n", ver1);
			printf("Vereador Maria da Pamonha - %d \n", ver2);
			printf("Vereador Ze da Farmacia - %d \n", ver3);
			printf("Voto Nulo - %d \n", vernulo);
			printf("----------------------------\n");
			printf("Apuracao Prefeito Final: \n");
			printf("Prefeito Dr Zureta - %d \n", pref1);
			printf("Prefeito Senhor Gomes - %d \n", pref2);
			printf("Voto Nulo - %d \n", prefnulo);
			printf("----------------------------\n");
			
			printf("O que voce deseja fazer ?\n");
			printf("1 - votar\n");
			printf("2 - apuracao dos votos\n");
			printf("3 - sair\n");
			scanf("%d", &op);
			system("cls");
		} 
	}

	return 0;
}
