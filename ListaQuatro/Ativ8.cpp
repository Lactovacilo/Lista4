#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int tempC, escolha;
	
	cout << "Coloque uma temperatura (ºC) para convertê-la em Fahrenheit ou Kelvin\n";
	cin >> tempC;
	
	cout << "Deseja converter em 1 (Fahrenheit) ou 2 (Kelvin)?\n";
	cin >> escolha;
	
	switch (escolha){
		case 1:
			cout << "Em Fahrenheit resulta em: " << (tempC*1.8) + 32 << "ºF";
			break;
		case 2:
			cout << "Em Fahrenheit resulta em: " << tempC + 273.15 << "ºK";
			break;
		default:
			cout << "O número que você inseriu é inválido.";
	}
}
