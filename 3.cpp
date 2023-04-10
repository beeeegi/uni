#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	
	// amocana 2

	char simbolo;
	int raodenoba1 = 0, raodenoba2 = 0;

	for (int i = 0; i < 6; i++) {

		cout << "shemoitanet simbolo: ";
		cin >> simbolo;

		switch (simbolo) {

			case '<': case '>': case '=':
				++raodenoba1; 
				break;

			case '1': case '3': case '7':
				++raodenoba2;
				break;

			default: 
				break;
		}
	}

	cout << "simboloebis raodenoba: " << raodenoba1 << endl;
	cout << "cifrebis raodenoba: " << raodenoba2 << endl;

	// amocana 2


}
