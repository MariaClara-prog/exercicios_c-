	//Maria Clara Oliveira Brandão
		
	/*7. Elabore um programa (português estruturado) para calcular o volume de uma esfera (VOL). 
	O raio (R) da esfera será fornecido pelo usuário.
	Obs: VOL = 3.14*R2 (apresentar o volume da esfera)*/

//Declaração de biblioteca
#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
 
//Declaração de variáveis
float raio, volume;

//Entrada de dados
cout << "Entre com o valor do raio: "; cin >> raio;

//Processamento de dados

volume = (4.0/3.0) * 3.14 * pow(raio, 3);

//Saida de dados
cout << "o volume da esfera: " << volume;

}
