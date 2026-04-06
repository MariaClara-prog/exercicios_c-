	//Maria Clara Oliveira Brandão

	/*10. Elabore um programa (português estruturado) que receba dois valores inteiros nas variáveis A e B.
	O programa deve trocar os valores entre as variáveis (ou seja, ao término do programa a variável A deve ter o valor inicial de B e vice-versa).
	Apresentar as duas variáveis o final.*/

//Declaração de biblioteca
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

//Declaração de variaveis
float A, B, aux;
		
//Entrada de dados
cout << "digite o valor de A: "; cin >> A;
cout << "digite o valor de B: "; cin >> B;
	
//Processamento de dados
aux = A;
A = B;
B = aux;
	
//Saida de dados
cout << "O valor de A e: " << A << endl;
cout << "O valor de B e: " << B;
			
}