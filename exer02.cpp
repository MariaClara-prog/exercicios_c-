	//Maria Clara Oliveira Brandao

	/*2. Elabore um programa (português estruturado) para calcular a área (AREA) e o perímetro (P) de uma sala,
	sendo que os comprimentos (L e C) são fornecidos pelo usuário.
	Apresente a área e o perímetro depois de calculados.*/

//Declaração de bibliotecas
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	
//Declaração de variaveis
float base, altura, area, perimetro;

//Entrada de Dados
cout << "Entre com o valor da base: "; cin >> base;	
cout << "Entre com o valor da altura: "; cin >> altura;
	
//Processamento de Dados
area = base * altura;
perimetro = (2 * base) + (2 * altura);

//Saída de dados
cout << "area: "<< area << endl;
cout << "perimetro: "<< perimetro << endl;
}