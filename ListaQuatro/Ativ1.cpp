#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int dia;
	
	cout << "Escolha um número de 1 a 7 para saber o dia da semana:\n";
	cin >> dia;
	
	switch(dia){
		case 1:
			cout << "Segunda-feira";
			break;
		case 2:
			cout << "Terça-feira";
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
			cout << "Sábado";
			break;
		case 7:
			cout << "Domingo";
			break;
		default:
			cout << "Você inseriu um número inválido";
	}
}
