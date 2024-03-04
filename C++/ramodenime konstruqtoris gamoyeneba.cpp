#include <iostream>
using namespace std;

class martkutxedi{
    public:
        int sigrdze;
        int sigane;
        martkutxedi(int a, int b){
            sigrdze = a;
            sigane = b;
        }
        void fartobi(){
            int x = sigrdze * sigane;
           
            cout << "martkutxedis fartobi = " << x << endl;
        }
};

int main() {
    martkutxedi Martkutxedi(10, 7);
    Martkutxedi.fartobi();
   
    martkutxedi Martkutxedi1(20, 11);
    Martkutxedi1.fartobi();
   

}
