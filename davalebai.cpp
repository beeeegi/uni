#include <iostream>
using namespace std;

class martkutxedi{
    public:
        int sigrdze;
        int sigane;
        void perimetri();
};

void martkutxedi::perimetri(){
    int a = 2 * (sigane + sigrdze);
    cout << "perimetri = " << a << endl;
}

int main()
{
    martkutxedi martkutxedi1;
    martkutxedi martkutxedi2;
   
    martkutxedi1.sigrdze = 3;
    martkutxedi1.sigane = 4;
    martkutxedi1.perimetri();
   
    martkutxedi2.sigane = 5;
    martkutxedi2.sigrdze = 6;
    martkutxedi2.perimetri();
   
   
}
