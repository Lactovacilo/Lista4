#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	string letra;
	
	cout << "Digite uma letra (min�scula) para saber se ela � vogal ou consoante:\n";
	cin >> letra;
	
	if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
		cout << "\n� uma vogal.";
	}else{
		cout << "\n� uma consoante.";
	}
}
