/*
#
#
#
#     iteraciuli
#
#
#
*/

#include <iostream>
using namespace std;

int main()
{
    int t[10];
   
    for(int i = 0; i < 10; i++){
       
        t[i] = 3*i - 1;  // formula mocemulia pirobashi (magalitad: 3*k - 1) sadac k aris masivis koeficienti anu i
       
        cout << "t[" << i << "] = " << t[i] << endl;
    }
}

/*
#
#
#
#     rekurentuli
#
#
#
*/

#include <iostream>
using namespace std;

int main()
{ 
    int t[10];
   
    for(int i = 0; i < 10; i++){
       
        t[i] = i-1 + 3;   //formula mocemulia pirobashi (k - 1 + 3) sadac k aris masivis koeficienti
       
        cout << "t[" << i << "] = " << t[i] << endl;
    }
}
