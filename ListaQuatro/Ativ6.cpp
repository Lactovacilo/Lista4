#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	cout << "Digite um n�mero para saber seu turno (1 a 3):\n";
	cin >> n;
	
	switch (n){
		case 1:
			cout << "Manh�";
			break;
		case 2:
			cout << "Tarde";
			break;
		case 3:
			cout << "Noite";
			break;
		default:
			cout << "O n�mero que voc� inseriu � inv�lido";
	}
}
