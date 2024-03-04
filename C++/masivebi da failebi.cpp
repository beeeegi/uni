#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
int a[5] = { 2, 3, 4, 1, 6 }, b[5] = { 0 }, l;

ofstream chawera("file1.dat");
for (int i = 0; i < 5; i++){
chawera << a[i] << " ";
}
chawera.close();

ifstream wakitxva("file1.dat");
for (int i = 0; i < 5; i++){
wakitxva >> l;
if (l % 2 == 0){
b[i] = l;
}
}
wakitxva.close();

for (int i = 0; i < 5; i++){
cout << b[i] << endl;
}

system("pause");
return 0;
}
