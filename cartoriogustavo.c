#include <stdio.h>  //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca responsavel por cuida das strings

int Registropornome()
{
	char arquivo[40];
	char cpf[40];
	char nome[20];
	char sobrenome[60];
	char email[100];
	char cargo[50];
	
	printf("Digite o CPF para cadastrar:");
	scanf("%s", cpf);
	
	strcpy( arquivo, cpf); //Responsavel por criar os valores das string
	
	FILE *file; //cria arquivo
	file = fopen(arquivo, "w"); //cria o arquivo
	fprintf(file, cpf); //salvo o valor da variavel
	fclose(file); //fecho o arquivo
	
	
	file = fopen(arquivo, "a");
	fprintf( file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s", nome);
	
	file = fopen (arquivo, "a");
	fprintf(file, "Nome:");
	fclose(file);
	
	file = fopen (arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s", sobrenome);

	file = fopen (arquivo, "a");
	fprintf(file, "Sobrenome:");
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite o e-mail a ser cadastrado:");
	scanf("%s", email);
	
	file = fopen (arquivo, "a");
	fprintf(file, "e-mail:");
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, email);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ", ");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s", cargo);
	
	file = fopen (arquivo, "a");
	fprintf(file, "Cargo:");
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf( file, cargo);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ".");
	fclose(file);

	system("pause");

}	

int Consultapornome()
{
	setlocale (LC_ALL, "portuguese"); //definindo biblioteca
	
	char cpf[40];
	char conteudo[300];
	
	printf("Digite o CPF a ser consultado");
	scanf("%s", cpf);
	
	FILE * file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo,CPF n�o localizado!. \n");
	}
	
	while (fgets (conteudo,300, file)!= NULL)
	{
		printf("\nEssas s�o as informa�oes do usu�rio:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
}



int ConsultaporCPF()
{
	printf("Voc� escolheu consultar por CPF\n");
	system("pause");
}

int Deletarpornome()
{
	
	char nome [40];
	
	printf("Digite o nome a ser deletado: ");
	scanf("%s", nome);
	
	remove(nome);
	
	FILE* file;
	file = fopen (nome, "r");
	
	if (file== NULL)
	{
		
		printf("Usu�rio deletado do sistema!\n");
		system("pause");
	}
	
	
}

DeletarporCPF()
{

	char cpf [40];
	
	printf("Digite o cpf a ser deletado:");
	scanf("%s", cpf);
	
	remove (cpf);
	
	FILE* file;
	file = fopen (cpf, "r");
	
	if (file== NULL)
	{
		
		printf("Us�ario deletado do sistema!\n");
		system("pause");
	}

	
}
int main()
{
	
	int opcao=0; //definindo variavel
	int laco=1; 
	
	for(laco=1;laco=1;)
	{
	
	
		setlocale (LC_ALL, "portuguese"); //definindo biblioteca
	
		system("cls");
	
		printf("\t\tCart�rio da EBAC\n\n"); //inicio do menu
		printf("\tEscolha a op��o desejada do menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar por nomes\n");
		printf("\t3 - Consultar por CPF\n");
		printf("\t4 - Deletar por nomes\n");
		printf("\t5 - Deletar por CPF\n");
		printf("\t6 - Sair do sistema\n\n");
		printf("Op��o:"); // final do menu
	
	
		scanf("%d" , &opcao); //armazenando a escolha do usuario
	
		system("cls");
		
		switch(opcao)
		{
			case 1:
			Registropornome();	
			break;
						
			case 2:
			Consultapornome();
			break;
			
			case 3:
			ConsultaporCPF();
			break;
				
			case 4:
			Deletarpornome();
			break;
			
			case 5:
			DeletarporCPF();
			break;
			
			case 6:
			printf("Obrigado por utilizar o sistema\n");
			return 0;
			break;
						
			default:
			printf("Essa op��o nao est� disponivel\n"); 
			system("pause");
			break; 
		}
	
	}
}
