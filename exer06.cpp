	//Maria Clara Oliveira Brandão
		
	/*6. Elabore um programa (português estruturado) que calcule a idade de uma pessoa, 
	sendo que o ano atual (AA) e o ano do nascimento da pessoa (AN) são fornecidos pelo usuário. (considere que a pessoa já fez aniversário nesse ano). 
	Apresentar a idade da pessoa depois de calculada. */

//Declaração de bibliotecas
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{	
	
//Declaração de variaveis
int aa, an, idade;


//Entrada de Dados
cout << "em que ano estamos? "; cin >> aa;
cout << "em que ano voce nasceu? "; cin >> an;

//Processamento de Dados
idade = aa - an;

//Saída de dados
cout << "sua idade: " << idade << endl;
}