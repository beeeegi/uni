#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{

	// amocana 3

	int m[10], s = 1;

	for (int i = 0; i < 10; i++) {

		m[i] = rand() % (46 - (-2)) + (-2);

		cout << m[i] << endl;

		if ((m[i] <= 15) && (m[i] >= 1)) {

			s *= m[i];
		}
	}

	cout << "namravli = " << s;


	// amocana 3
}
