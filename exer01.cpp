	//Maria Clara Oliveira Brandao

	/*1. Elabore um programa (português estruturado) para calcular a área (AREA) de uma sala,
	sendo que os comprimentos das paredes (L e C) são fornecidos pelo usuário.
	Apresente a área depois de calculada.*/

//Declaração de bibliotecas
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	
//Declaração de variaveis
float base, altura, area;

//Entrada de Dados
cout << "Entre com o valor da base: "; cin >> base;

cout << "Entre com o valor da altura: "; cin >> altura;

//Processamento de Dados
area = base * altura;

//Saída de dados
cout << "valor da area: " << area;
}