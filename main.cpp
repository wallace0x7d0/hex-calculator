#include <iostream>
#include "Hexadecimal.h"

using namespace std;

int main(int argc, char **argv){

	while(true){

		cout << "=========================================================" << endl;
    	cout << "=                                                       =" << endl;
    	cout << "=                 Hexadecimal Calculator                =" << endl;
    	cout << "=                                                       =" << endl;
    	cout << "=========================================================" << endl << endl;

		int opt;
		int dec;
		string hex;

		cout << "ESCOLHA UMA OPÇÃO ABAIXO: " << endl << endl;
		cout << "1 - Hexadecimal para decimal"   << endl;
		cout << "2 - Decimal para hexadecimal"   << endl << endl;
		cout << "> ";
		cin >> opt;


		switch(opt){
			case 1:
				
				cout << endl << "Digite o hexadecimal: ";
				cin >> hex;

				cout << "Resultado: " << HexConverter::toDecimal(hex) << endl;

				break;
			case 2:

				cout << endl << "Digite o decimal: ";
				cin >> dec;

				cout << "Resultado: " << HexConverter::toHexadecimal(dec) << endl;
				
				break;
			default:
				cout << "Opção inválida!" << endl;
		}

		return false;
	}

	return 0;
}