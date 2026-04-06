	//Maria Clara Oliveira Brandão

	/*8. Elabore um programa (português estruturado) para calcular o valor a ser pago pelo período de estacionamento do automóvel (PAG).
	O usuário entra com os seguintes dados: hora (HE) e minuto (ME) de entrada, hora (HS) e minuto (MS) de saída. 
	Sabe-se que este estacionamento cobra R$ 4,00, mas calcula as frações de hora também.
	Por exemplo, se a pessoa ficar 1 hora e quinze minutos, pagará R$ 5,00 (R$ 4,00 pela hora e R$ 1,00 pelos quinze minutos).*/

//Declaração de biblioteca
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

//Declaração de variaveis
int HE, ME, HS, MS;
int entradamin, saidamin, tempo;
float pagamento;
	
//Entrada de dados
cout <<"digite a hora e minuto de entrada: "; cin >> HE >> ME;
cout <<"digite a hora e minuto de saida: "; cin >> HS >> MS;
	
//Processamento de dados
entradamin = (HE * 60) + ME;
saidamin = (HS * 60) + MS;
tempo = saidamin - entradamin;
pagamento = (tempo) / 15.0;
    
//Saída de dados
cout << "pagamento: R$" << pagamento;
	
}