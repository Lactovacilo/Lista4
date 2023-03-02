#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	cout << "Digite um número para saber sua nota (1 a 5):\n";
	cin >> n;
	
	switch (n){
		case 1:
			cout << "A";
			break;
		case 2:
			cout << "B";
			break;
		case 3:
			cout << "C";
			break;
		case 4:
			cout << "D";
			break;
		case 5:
			cout << "F";
			break;
		default:
			cout << "O número que você inseriu é inválido";
	}
}
