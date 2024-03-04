#include <iostream>
using namespace std;

int bechdva(int a[], int raodenoba){
    for(int i = 0; i < raodenoba; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
    return 0;
}

int main()
{
    int a[] = {3, 6, 1, 2, 9, 5,};
    int raodenoba, index, min, droebiti;
   
    raodenoba = sizeof(a) / sizeof(a[0]);
    bechdva(a, raodenoba);
   
    for(int i = 0; i < raodenoba; i++){
        min = a[i];
        index = i;
       
        //minimalurs edzebs
        for(int j = i + 1; j < raodenoba; j++){
            if(min > a[j]){
                min = a[j];
                index = j;
            }
        }
        //minimalurs edzebs
       
        droebiti = a[i];
        a[i] = a[index];
        a[index] = droebiti;
       
        bechdva(a, raodenoba);
    }
}
