#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	#include <iostream>
	using namespace std;

	int dia;
	
	cout << "Escolha um n�mero de 1 a 7 para saber se o dia � �til ou um final de semana:\n";
	cin >> dia;
	
	switch(dia){
		case 1:
			cout << "Dia �til";
			break;
		case 2:
			cout << "Dia �til";
			break;
		case 3:
			cout << "Dia �til";
			break;
		case 4:
			cout << "Dia �til";
			break;
		case 5:
			cout << "Dia �til";
			break;
		case 6:
			cout << "Final de semana";
			break;
		case 7:
			cout << "Final de semana";
			break;
		default:
			cout << "Voc� inseriu um n�mero inv�lido";
	}
}
