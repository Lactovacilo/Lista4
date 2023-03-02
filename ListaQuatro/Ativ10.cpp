#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	#include <iostream>
	using namespace std;

	int dia;
	
	cout << "Escolha um número de 1 a 7 para saber se o dia é útil ou um final de semana:\n";
	cin >> dia;
	
	switch(dia){
		case 1:
			cout << "Dia útil";
			break;
		case 2:
			cout << "Dia útil";
			break;
		case 3:
			cout << "Dia útil";
			break;
		case 4:
			cout << "Dia útil";
			break;
		case 5:
			cout << "Dia útil";
			break;
		case 6:
			cout << "Final de semana";
			break;
		case 7:
			cout << "Final de semana";
			break;
		default:
			cout << "Você inseriu um número inválido";
	}
}
