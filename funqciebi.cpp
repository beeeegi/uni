#include <iostream>
using namespace std;


int funqcia(int pirveli, int meore, int mesame, int meotxe) {
    int pasuxi;

    pasuxi = (pirveli + meore + mesame + meotxe) / 4;

    return pasuxi;
}



int main()
{
    int a, b, c, d, saboloo;

    cout << "Sheiyvanet 4 ricxvi, yoveli ricxvis sheyvanis shemdeg daachirent Enter-s" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    
    cout << "pasuxi: " << funqcia(a, b, c, d) << endl;


}
