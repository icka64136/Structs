#include<stdio.h>
int i;

typedef struct
{
	float nota1;
	float nota2;
	float nota3;
	
}notas;

pre(notas x[],int y)//x está Recebendo a Variavél Aluno 1 3 Preenche a Nota de 3 Alunos.
{	
	for(i=0; i<y; i++)
	{	
	printf("Digite as Suas Notas: \n");
	scanf("%f",&x[i].nota1);
	printf("Digite as Suas Notas: \n");
	scanf("%f",&x[i].nota2);
	printf("Digite as Suas Notas: \n");
	scanf("%f",&x[i].nota3);
	}
}

main()
{
	notas aluno1[3];
	
	pre(aluno1,3); 
	
	//float media;
	

	for(i=0; i<3; i++)
	{	
	printf("Notas:\n 1 - %.1f \n 2 - %.1f \n 3 - %.1f \n",aluno1[i].nota1,aluno1[i].nota2,aluno1[i].nota3);
	}
	//media=(aluno1.nota1+aluno1.nota2+aluno1.nota3)/3;
	
	//printf("Media: %.1f",media);
}
