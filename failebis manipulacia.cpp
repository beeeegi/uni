#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {

int a = 25, b = 90, c, d;

//failshi wers masivis mnishnvelobas
ofstream chawera("numbers.dat");

chawera << a << " " << b;
chawera.close();

//failidan igebs pirvelive mnishnvelobas da anichebs 'c' da 'd' cvlads
ifstream wakitxva("numbers.dat");

wakitxva >> c >> d;
wakitxva.close();

cout << c << " " << d << endl;

system("pause");
return 0;
}
