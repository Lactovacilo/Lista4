#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	#include <iostream>
	using namespace std;
	
	int nTabuada, limTab;
	
	cout << "Digite um número de 1 a 10:\n";
	cin >> nTabuada;
	
	while (nTabuada > 10 || nTabuada < 0){
		cout << "\nO número que você inseriu é inválido, digite novamente:\n";
		cin >> nTabuada;
	}
	
	for (int i = 0; i <= 10; i++){
		cout << nTabuada << " x " << i << " = " << (nTabuada*i) << "\n";
	}
}
