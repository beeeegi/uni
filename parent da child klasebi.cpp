#include <iostream>
using namespace std;

class figura{
    public:
        int sigrdze;
        int sigane;
        void minicheba_sigrdze(){
            cout << "sheiyvanet sigrdze" << endl;
            cin >> sigrdze;
        };
        void minicheba_sigane(){
            cout << "sheiyvanet sigane" << endl;
            cin >> sigane;
        };
};

// martkutxedi aris figura klasis child
// anu tu avsaxavt martkutxedi klass obieqtad
// shesabaisad wvdoma gvedzleva mis parent klastan
// anu shegvidzlia gamovidzaxot nebismieri cvladi
// an funqcia figura klasidan ;)
class martkutxedi: public figura{
    public:
        void gamotvla(){
            int z = 2 * (sigrdze + sigane);
            cout << "perimetri = " << z << endl;
        };
};

int main()
{
    martkutxedi m;
   
    m.minicheba_sigrdze();
    m.minicheba_sigane();
    m.gamotvla();
   
   
}
