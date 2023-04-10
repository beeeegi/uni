#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
	// amocana 1

	float x, y;

	for (x = -16; x <= 16; x += 0.5)
	{
		if (x > 15)
		{
			y = cos(x * x) + x;
		}

		if ((-4 < x) && (x <= 15))
		{
			y = (tan(x) - 3) / (x + 5);
		}

		else
		{
			y = 2 * x;
		}

		cout << "y = " << y << endl;
	}

	// amocana 1
}
