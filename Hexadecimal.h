#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class HexConverter{
	public:
		static string toHexadecimal(int dec);
		static int toDecimal(string hex);
};

string HexConverter::toHexadecimal(int dec){
	vector<char> aux;
	string hex;

	for (int i = dec; i > 0; i /= 16) {
		if((i%16) > 9){
			aux.push_back((char)((i%16)-10)+65);

		}else {
			aux.push_back((char)(48+(i%16)));

		}
	}

	for (int i = aux.size()-1; i >= 0; i--) {
		hex += aux[i];
	}

	return hex;
}

int HexConverter::toDecimal(string hex){
	int dec = 0;

	for (int i = hex.size()-1, j=0; i >= 0; --i, ++j){
		if((int)hex[j] > 64){
			dec += ((int)hex[j]-55)*pow(16,i);
		}else {
			dec += ((int)hex[j]-48)*pow(16,i);
		}
	}

	return dec;
}