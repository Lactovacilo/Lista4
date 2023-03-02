#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int mes;
	
	cout << "Digite um número de 1 a 12 para saber o mês:\n";
	cin >> mes;
	
	switch (mes){
		case 1:
			cout << "Janeiro";
			break;
		case 2:
			cout << "Fevereiro";
			break;
		case 3:
			cout << "Março";
			break;
		case 4:
			cout << "Abril";
			break;
		case 5:
			cout << "Maio";
			break;
		case 6:
			cout << "Junho";
			break;
		case 7:
			cout << "Julho";
			break;
		case 8:
			cout << "Agosto";
			break;
		case 9:
			cout << "Setembro";
			break;
		case 10:
			cout << "Outubro";
			break;
		case 11:
			cout << "Novembro";
			break;
		case 12:
			cout << "Dezembro";
			break;
		default:
			cout << "O número que você inseriu é inválido";
	}
}
