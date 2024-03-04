#include <iostream>
using namespace std;

class studenti{
    public:
        float gamotvla(int z[], int m);
};

float studenti::gamotvla(int z[], int m){
    float s = 0;
    float x = 0;
   
    for(int i = 0; i < m; i++){
        s += z[i];
    }
   
    x = s / m;
   
    return x;
}

int main()
{
    studenti Studenti;
    int a[9] = {8, 7, 9, 10, 8, 6, 9, 1, 3};
    int y = sizeof(a) / sizeof(a[0]);
   
    cout << Studenti.gamotvla(a, y) << endl;
}
