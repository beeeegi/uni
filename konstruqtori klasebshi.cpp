#include <iostream>
using namespace std;

class Tarigi{
    private:
        int ricxvi;
        int tve;
        int weli;
    public:
        void bechdva(){
            cout << ricxvi << "/" << tve << "/" << weli << endl;
        };
        Tarigi(int a, int b, int c){
            ricxvi = a;
            tve = b;
            weli = c;
        }
};

int main() {
    Tarigi tarigi(2,5,2023);
   
    tarigi.bechdva();
}
