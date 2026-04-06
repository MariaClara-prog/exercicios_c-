	//Maria Clara Oliveira Brandão
	
	/*5. Elabore um programa (português estruturado) para calcular qual foi a porcentagem de desconto dada em um determinado produto (DESC),
	sabendo-se o preço original do produto (PRECO)
	e o preço que foi cobrado por ele depois do desconto (PRECOF).*/

//Declaração de bibliotecas
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{

	
//Declaração de variaveis
float valor_orig, valor_fin, desconto, porcent;

//Entrada de Dados
cout << "Entre com o valor original do produto: "; cin >> valor_orig;
cout << "Entre com o valor cobrado apos o desconto: "; cin >> valor_fin;

//Processamento de Dados
desconto = (valor_orig - valor_fin) / valor_orig;
porcent = (desconto) * 100;
//Saída de dados
cout << "valor do desconto: " << porcent << "%";

}