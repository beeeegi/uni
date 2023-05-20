#include <iostream>
using namespace std;

class gamyofi{
    private:
        int pirveli;
        int meore;
    public:
        void minicheba(int x, int y);
        bool arisGamyofi();
};

void gamyofi::minicheba(int x, int y){
    pirveli = x;
    meore = y;
}

bool gamyofi::arisGamyofi(){
    int z = pirveli % meore;
    if(z == 0){
        return true;
    }else{
        return false;
    }  
}

int main() {
    gamyofi Gamyofi;
    int a, b;
    cout << "mianichet cvladebs mnishnvelobebi" << endl;
    cin >> a;
    cin >> b;
   
    Gamyofi.minicheba(a, b);
   
    if(Gamyofi.arisGamyofi() == true){
        cout << "pirveli ricxvi meoreze iyofa" << endl;
    }else{
        cout << "pirveli ricxvi meoreze ar iyofa" << endl;
    }
}
