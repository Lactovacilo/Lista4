#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int dia;
	
	cout << "Escolha um n�mero de 1 a 7 para saber o dia da semana:\n";
	cin >> dia;
	
	switch(dia){
		case 1:
			cout << "Segunda-feira";
			break;
		case 2:
			cout << "Ter�a-feira";
			break;
		case 3:
			cout << "Quarta-feira";
			break;
		case 4:
			cout << "Quinta-feira";
			break;
		case 5:
			cout << "Sexta-feira";
			break;
		case 6:
			cout << "S�bado";
			break;
		case 7:
			cout << "Domingo";
			break;
		default:
			cout << "Voc� inseriu um n�mero inv�lido";
	}
}
