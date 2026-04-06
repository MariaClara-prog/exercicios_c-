	//Maria Clara Oliveira Brandao
	
	/*4. Elabore um programa (português estruturado) para calcular quanto será pago por um produto (PAG),
	sendo que o preço do produto (PR) e o desconto (D) são fornecidos pelo usuário. 
	Apresentar o valor a ser pago pelo produto.*/

//Declaração de bibliotecas
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{

//Declaração de variaveis
float PR, D, preco, valor;

//Entrada de Dados
cout << "Entre com o valor do produto: "; cin >> PR;
cout << "Entre com o desconto do produto: "; cin >> D;

//Processamento de Dados
preco = PR * (D / 100);
valor = PR - preco;
//Saída de dados
cout << "valor a ser pago pelo produto: " << valor;
}