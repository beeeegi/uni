#include <iostream>
using namespace std;

int main() {
    int i = 1, a, k = 0;
    char z;
    while (i <= 8) {
        a = 8 - i;
        cout << "simboloebis darchenili raodenoba: [" << a << "]" << endl;
        cout << "sheiyvanet simbolo: ";
        cin >> z;
        i++;
        if (z == 'a') {
            k++;
        }


    }
    cout << "tqven sheiyvanet 'a' " << k << "-jer" << endl;
}
