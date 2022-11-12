#include <iostream>
using namespace std;

int main (){

	double num1, num2, soma, sub, div, mult;
	char operador;

	cout << "Digite o primeiro número: " << endl;
	cin >> num1;
	
	cout << "Digite o segundo número: " << endl;
	cin >> num2;
	
	soma = num1 + num2;
	sub = num1 - num2;
	div = num1 / num2;
	mult= num1 * num2;

	cout << "Selecione o operador matematico: " << endl;
	cout << "(+) (-) (*) (/)" << endl;
	cin >> operador;

	switch (operador){
	case '+':
		cout << soma << endl;
		break;

	case '-':
		cout << sub << endl;
		break;

	case '*':
		cout << mult << endl;
		break;

	case '/':
		cout << div << endl;
		break;

	default:
		cout<< "opcao nao identificada:";

	system ("pause");
	return 0;
	}
}
