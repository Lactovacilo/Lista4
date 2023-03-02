#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	cout << "Digite um número para saber se ele é negativo, positivo ou zero:\n";
	cin >> n;
	
	if (n < 0){
		cout << "\nO número é negativo";
	}else if (n == 0){
		cout << "\n O número é 0 (zero)";
	}else if (n > 0){
		cout << "\nO número é positivo";
	}
}
