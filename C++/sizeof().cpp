#include <iostream>
using namespace std;

int main()
{
    int a[] = {5, 100, 3, 7, 23, 12, 64, 83, 53, 76, 91};
    int s, z, min;
   
    s = sizeof(a) / sizeof(a[0]);
   
    min = a[0];
    z = 0;
   
    for(int i = 1; i < s; i++){
       
        if(min > a[i]){
            min = a[i];
            z = i;
        }
       
    }
   
    cout << "masivis elementebis raodenoba: " << s << endl;
    cout << "minimaluri: " << min << endl;
    cout << "indeqsi: " << z << endl;
}
