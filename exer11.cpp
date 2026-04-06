	//Maria Clara Oliveira Brandão

	/*11. Elabore um programa (português estruturado) que calcule a quantidade de tijolos iguais (QTD) necessários para construir uma determinada parede.
	São dados de entrada do programa: dimensões do tijolo (comprimento – CT e largura – LT) e dimensões da parede a ser construída (comprimento – CP e largura – LP).*/

//Declaração de biblioteca
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

//Declaracao de variaveis
float LT, LP, CT, CP;
int QTDT;
	
//Entrada de dados
cout << "digite a largura do tijolo: "; cin >> LT;
cout << "digite o comprimento do tijolo "; cin >> CT;
cout << "digite a largura da parede: "; cin >> LP;
cout << "digite o comprimento da parede: "; cin >> CP;
	
//Processamento de dados 
QTDT = (LP * CP) / (LT * CT ) ;
	
//Saida de dados
cout << "a quantidade de tijolos e: " << QTDT;

}