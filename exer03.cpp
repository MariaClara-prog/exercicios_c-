	//Maria Clara Oliveira Brandao

	/*3. Elabore um programa (português estruturado) para calcular o valor monetário do desconto (D), 
	sendo que o preço do produto (PR) é fornecido pelo usuário e o desconto é de 5%. 
	Apresentar o valor do desconto.*/

//Declaração de bibliotecas
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{

//Declaração de variaveis
float preco, desconto;

//Entrada de Dados
cout << "Entre com o valor do produto: "; cin >> preco;

//Processamento de Dados
desconto = preco * (5.0 / 100);

//Saída de dados
cout << "valor do desconto: " << desconto;

}
  