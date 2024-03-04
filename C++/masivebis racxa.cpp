#include <iostream>
using namespace std;

int main()
{
int x = 0, s[3] = { 5, -64, 259};

for (int i = 0; i < 3; i++) {
x += s[i];
cout << s[i] << endl;
}

cout << "jami: " << x << endl;
}
