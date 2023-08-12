#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {
	float peso;
	int idade;
	float altura;
}Pessoa;

Pessoa SetPessoa(int idade, float peso, float altura) {
	Pessoa P;
	P.idade = idade;
	P.peso = peso;
	P.altura = altura;
	return P;
}

void ImprimePessoa (Pessoa P) {
	printf ("Idade: %d\Peso: %f\nAltura:%f\n", P.idade, P.peso, P.altura);
}

int main(void) {
	Pessoa Joao;
	
	Joao = SetPessoa(15,60.5,1.75);
	
	ImprimePessoa(Joao);
	return 0;
}
