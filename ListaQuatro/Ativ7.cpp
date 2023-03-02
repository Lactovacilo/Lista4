#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	char carac;
	
	cout << "Digite um caractere para saber se ele é um número, uma letra maíscula ou uma letra minúscula:\n";
	cin >> carac;
	
	if(carac >= 48 && carac <= 57)
		cout << "\nÉ um número";
	else if(carac >= 65 && carac <= 90)
		cout << "\nÉ uma letra maiúscula";
	else if(carac >= 97 && carac <= 122)
		cout << "\nÉ uma letra minúscula";
	else{
		cout << "\nNão tem esse caractere na lista aqui não...";
	}
}
