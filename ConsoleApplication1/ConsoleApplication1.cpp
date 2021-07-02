#include <iostream>
#include "Propriete.h"

using namespace std;

int main() {
   // std::cout << "Hello World!\n";

	Propriete<double> prop1("label1", 123.45);
	Propriete<bool> prop2("label_bool", true);

	cout << prop1.GetNom() << " = " << prop1.GetValeur() << endl;
	cout << prop2.GetNom() << " = " << prop2.GetValeur() << endl;
}