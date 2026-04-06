	//Maria Clara Oliveira Brandão

	/*9. Elabore um programa (português estruturado) que calcule o valor em Reais (VAL_REAL),
	correspondente aos dólares que um turista possui no cofre do hotel. 
	O programa deve solicitar os seguintes dados: Quantidade de dólares guardados no cofre (VAL_DOLAR) e cotação do dólar naquele dia (COT).*/

//Declaração de biblioteca
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

//Declaração de variaveis
float val_real, val_dolar, cot;
		
//Entrada de dados
cout << "digite o a quantidade de dolares guardados: "; cin >> val_dolar;
cout << "digite a cotacao do dolar: "; cin >> cot;
	
//Processamento de dados
val_real = val_dolar * cot;
	
//Saida de dados
cout << "o valor guardado convertido em reais e: R$" << val_real;
						
}