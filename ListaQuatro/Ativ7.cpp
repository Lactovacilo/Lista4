#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	char carac;
	
	cout << "Digite um caractere para saber se ele � um n�mero, uma letra ma�scula ou uma letra min�scula:\n";
	cin >> carac;
	
	if(carac >= 48 && carac <= 57)
		cout << "\n� um n�mero";
	else if(carac >= 65 && carac <= 90)
		cout << "\n� uma letra mai�scula";
	else if(carac >= 97 && carac <= 122)
		cout << "\n� uma letra min�scula";
	else{
		cout << "\nN�o tem esse caractere na lista aqui n�o...";
	}
}
