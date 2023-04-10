#include <iostream>
using namespace std;

struct product{
    int wona;
    int fasi;
} mas[3];

int main()
{
    int jamshi;
   
    cout << "Shemoitanet wonebi da fasebi: " << endl;
    for (int i = 0; i < 3; i++){
        cin >> mas[i].wona >> mas[i].fasi;
    } //wonebis da fasebis shetana
   
    for (int i = 0; i < 3; i++){
        jamshi += mas[i].wona * mas[i].fasi;
    } //jamis gamotvla (amravlebs yvela produqtis wonas fasze for loopis daxmarebit)
   
    cout << "jamshi gadasaxdelia " << jamshi << " lari" << endl;
   

}
