#include<stdio.h>
#include<string.h>

int i;

typedef struct dados
{
	char nome[20];
	char marcav[20];
	char modelo[20];
	char cor[10];
	int ano[8];
	
		
}dados;

preencher(dados x[],int y)
	{

		for(i=0;i<y;i++)
	{
		
		printf("Digite seu nome\n");
		scanf("%s",&x[i].nome);
		printf("Digite a marca do Seu Veiculo \n");
		scanf("%s",&x[i].marcav);
		printf("Digite o modelo do veiculo \n");
		scanf("%s",&x[i].modelo);
		printf("Digite a cor do veiculo \n");
		scanf("%s",&x[i].cor);
		printf("Digite o ano do veiculo \n");
		scanf("%d",&x[i].ano);
	}
	}

main()
{
	int x;
	dados v[5];
	preencher(v,5);
	
	for(i=0;i<5;i++)
	{	
		printf(" Nome: %s\n Marca: %s \n Modelo: %s \n Cor: %s \n Ano : %d \n",v[i].nome,v[i].marcav,v[i].modelo,v[i].cor,v[i].ano);
	}
}
