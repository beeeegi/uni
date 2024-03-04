#include <iostream>
using namespace std;

class Box{
    private:
        int sigrdze;
        int sigane;
        int simagle;
    public:    
        int moculoba();
        void minicheba(int Asigrdze, int Asigane, int Asimagle);
};

void Box::minicheba(int Asigrdze, int Asigane, int Asimagle){
    sigrdze = Asigrdze;
    sigane = Asigane;
    simagle = Asimagle;
}

int Box::moculoba(){
    int a = sigrdze * sigane * simagle;
    return a;
}

int main()
{
    int a, b, c;
    Box pirveli;
    Box meore;
   
    pirveli.minicheba(3, 4, 5);
    cout << "pirvelis moculoba = " << pirveli.moculoba() << endl;
   
    cout << endl;
   
    cout << "shemoitane meore gverdis zomebi" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
   
    meore.minicheba(a, b, c);
    cout << "meores moculoba = " << meore.moculoba() << endl;
   
   
}
