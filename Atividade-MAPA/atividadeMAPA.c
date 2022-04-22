#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char nome[100];
char cpf[15];
char sexo[2];
int idade;
int main();

struct elemento {
	char pergunta[300];
	int pontuacao;
};

struct elemento questoes[] = {
	{ .pergunta = "Tem febre (S/N): ", .pontuacao = 5},
	{ .pergunta = "Tem dor de cabeca (S/N): ", .pontuacao = 1},
	{ .pergunta = "Tem secrecao nasal ou espirros (S/N): ", .pontuacao = 1},
	{ .pergunta = "Tem dor/irritacao na garganta(S/N): ", .pontuacao = 1},
	{ .pergunta = "Tem tosse seca (S/N): ", .pontuacao = 3},
	{ .pergunta = "Tem dificuldade respiratoria (S/N): ", .pontuacao = 10},
	{ .pergunta = "Tem dores no corpo (S/N): ", .pontuacao = 1},
	{ .pergunta = "Tem diarreia (S/N): ", .pontuacao = 1},
	{ .pergunta = "Esteve em contato, nos ultimos 14 dias, com um caso diagnosticado com COVID-19 (S/N): ", .pontuacao = 10},
	{ .pergunta = "Esteve em locais com grande aglomeracao (S/N): ", .pontuacao = 3},
};

void questionario(){
	int i = 0;
	int soma = 0;
	char res;
	
	FILE *cadastro;
	cadastro = fopen("paciente.txt", "a");
	
	system("cls");
	printf("Responda as perguntas abaixo: \n");
	printf("\n");
	
	for(i=0;i<10;i++){
		printf("%s", questoes[i].pergunta);
		scanf("%c", &res);
		fflush(stdin);
		fprintf(cadastro, "%s %c\n", questoes[i].pergunta, res);
		
		if(res == 'S' || res == 's'){
			soma = soma + questoes[i].pontuacao;
		}		
	}
	fprintf(cadastro,"Pontuacao: " "%d" " pontos", soma);
	fclose(cadastro);
	
	system("cls");
	if (soma >= 0 && soma < 10){
		printf("Sua pontuacao: %d pontos. Deve se encaminhar para a ala de risco baixo. \n", soma);
	}
	if (soma >= 10 && soma < 20){
		printf("Sua pontuacao: %d pontos. Deve se encaminhar para a ala de risco medio. \n", soma);
	}
	if (soma >= 20){
		printf("Sua pontuacao: %d pontos. Deve se encaminhar para a ala de risco alto. \n", soma);
	}
	soma = 0;
	printf("\nPressione ENTER para voltar ao menu.");
	getchar();
	system("cls");
	main();
}

void cadastroPaciente(){
	FILE *cadastro;
	cadastro = fopen("paciente.txt", "a");
	
	printf("\n");
	printf("Digite o nome: ");
	scanf("%s", nome);
	fflush(stdin);
	printf("Digite o CPF: ");
	scanf("%s", cpf);
	fflush(stdin);
	printf("Digite o Sexo (M/F): ");
	scanf("%s", sexo);
	fflush(stdin);
	printf("Digite a idade: ");
	scanf("%d", &idade);
	fflush(stdin);
	fprintf(cadastro, "Nome: %s\nCPF: %s\nSexo: %s\nidade: %d\n", nome, cpf, sexo, idade);
	fclose(cadastro);
	
	questionario();
}

int main(int argc, char *argv[]) {
	
	int op;
	
	printf("Selecione uma opcao: \n");
	printf("1 - Cadastrar Paciente \n");
	printf("0 - Sair \n");
	printf("\n");
	scanf("%d", &op);
	
	switch (op) {
		case 0: printf("\nSaindo............");
			break;
		case 1: cadastroPaciente();
			break;
		default:
			break;
	}
		
	return 0;
}
