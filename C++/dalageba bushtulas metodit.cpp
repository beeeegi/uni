#include <iostream>
using namespace std;

void bechdva(int a[], int raodenoba){
    for(int i = 0; i < raodenoba; i++){
        cout << a[i] << "  ";
    }
    cout << endl;
}

int main()
{
    int droebiti = 0;
    int a[7] = {2, 1, 5, 6, 8, 3, 4};
   
    bechdva(a, 7);
    for(int j = 6; j > 0; j--){
        for(int i = 0; i < j; i++){
        if(a[i] > a[i + 1]){
            droebiti = a[i];
            a[i] = a[i + 1];
            a[i + 1] = droebiti;
        }
        else{
            continue;
        }
        bechdva(a, 7);
    }
    }

}
