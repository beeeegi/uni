#include <iostream>
using namespace std;


int funqcia(int a, int b, int c) {
    int p, n;

    p = a + b + c;
    cout << "jami = " << p << endl;

    n = a * b * c;
    return n;
}

int main()
{
    
    int a, b, c, p;

    cout << "shemoitanet ricxvebi: " << endl;
    cin >> a >> b >> c;

    p = funqcia(a, b, c);
    cout << "p = " << p << endl;

}
