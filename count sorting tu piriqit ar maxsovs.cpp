#include <iostream>
using namespace std;

int main()
{

    int a[] = {1, 4, 5, 7, 8, 2, 4, 7, 8, 2, 1, 3};
    int zoma = sizeof(a) / sizeof(a[0]);
    int b[zoma] = {0};
    int count[10] = {0};
    int s = 0;
   
    //mtliani masivis dabechvda
    for(int i = 0; i < zoma; i++){
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    //mtliani masivis dabechvda
   
    //cifrebis datvla masivshi
    for(int i = 0; i < zoma; i++){
        count[a[i]]++;
    }
    //cifrebis datvla masivshi
    cout << endl;
    for(int i = 0; i < 10; i++){
        cout << "count[" << i << "] = " << count[i] << endl;
    }
   
   
    //masivis dalageba
    for(int j = 0; j < 10; j++){
        for(int i = 0; i < count[j]; i++){
            b[s] = j;
            s++;
        }
    }
    //masivis dalageba
    cout << endl;
    for(int i = 0; i < zoma; i++){
        cout << "b[" << i << "] = " << b[i] << endl;
    }

}
