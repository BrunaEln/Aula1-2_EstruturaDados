#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	struct cadastro_aluno{
		char nome[50];
		char disciplina[30];
		float n_prova1;
		float n_prova2;
		int matricula;
		char email[50];
		int telefone;
		
	};
	
	struct cadastro_prof{
		char nome[50];
		int cpf;
		int matricula;
		char endereco[60];
	};
	
	
	struct cadastro_aluno aluno;
	struct cadastro_prof professor;
	
	printf ("\n------- Cadastro de aluno -------\n\n\n");
	printf ("Nome: ");
	fflush (stdin);
	fgets (aluno.nome, 50, stdin);
	
	printf ("Disciplina: ");
	fflush (stdin);
	fgets (aluno.disciplina, 30, stdin);
	
	printf ("Digite a primeira nota: ");
	scanf ("%f", &aluno.n_prova1);
	
	printf ("Digite a segunda nota: ");
	scanf ("%f", &aluno.n_prova2);
	
	printf ("Digite a matricula: ");
	scanf ("%d", &aluno.matricula);
	
	printf ("Digite o email: ");
	fflush (stdin);
	fgets (aluno.email, 50, stdin);
	
	printf ("Agora digite o telefone: ");
	scanf ("%d", &aluno.telefone);
	
	printf ("Nome do professor: ");
	fflush (stdin);
	fgets (professor.nome, 50, stdin);
	
	printf ("CPF do professor: ");
	scanf ("%d", &professor.cpf);
	
	printf ("Matricula do professor: ");
	scanf ("%d", &professor.matricula);
	
	printf ("Endereco: ");
	fflush (stdin);
	fgets (professor.endereco, 60, stdin);
	
	printf ("\n\n----------Dados Cadastrados (aluno)-----------\n\n");
	printf ("Nome: %s", aluno.nome);
	printf ("Disciplina: %s", aluno.disciplina);
	printf ("Nota da prova 1: %.2f\n", aluno.n_prova1);
	printf ("Nota da prova 2: %.2f\n", aluno.n_prova2);
	printf ("Matricula: %d\n", aluno.matricula);
	printf ("Email: %s", aluno.email);
	printf ("Telefone: %d", aluno.telefone);
	getch();
	
	printf ("\n\n----------Dados Cadastrados (professor)-----------\n\n");
	printf ("Nome do professor: %s\n", professor.nome);
	printf ("CPF professor: %d\n", professor.cpf);
	printf ("Matricula: %d\n", professor.matricula);
	printf ("Endereco: %s", professor.endereco);
	getch();
	
	return 0;
}
