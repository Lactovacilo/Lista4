#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	int n;
	
	cout << "Digite um n�mero para saber se ele � negativo, positivo ou zero:\n";
	cin >> n;
	
	if (n < 0){
		cout << "\nO n�mero � negativo";
	}else if (n == 0){
		cout << "\n O n�mero � 0 (zero)";
	}else if (n > 0){
		cout << "\nO n�mero � positivo";
	}
}
