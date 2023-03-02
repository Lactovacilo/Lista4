#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	string letra;
	
	cout << "Digite uma letra (minúscula) para saber se ela é vogal ou consoante:\n";
	cin >> letra;
	
	if (letra == "a" || letra == "e" || letra == "i" || letra == "o" || letra == "u"){
		cout << "\nÉ uma vogal.";
	}else{
		cout << "\nÉ uma consoante.";
	}
}
