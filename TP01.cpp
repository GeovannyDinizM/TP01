
#include <iostream>
using namespace std;

int main()


{
	cout << "Estrutura de Dados - FATEC" << endl;
	cout << "Digite seu nome: ";
	string nome = "";
	int nota1, nota2;
	cin >> nome;
	cout << "Digite a nota da P1: ";
	cin >> nota1;
	cout << "Digite a nota da P2: ";
	cin >> nota2;
	int media = (nota1 + nota2) / 2;
	if (media > 5)
	{
		cout << "Voce esta aprovado!\n";
	}
	else
	{
		cout << "Voce esta reprovado!\n";
	}
	cout << "========================\n";


}

