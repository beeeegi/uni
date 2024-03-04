#include <iostream>
using namespace std;

class otaxi{
    public:
        double sigrdze = 12.3;
        double simagle = 45.6;
        double sigane = 78.9;
        void moculoba();
        void fartobi(){
            double s = 2 * sigrdze * sigane + 2 * sigrdze * simagle + 2 * sigane * simagle;
            cout << "fartobi = " << s << endl;
        }
};

void otaxi::moculoba(){
    double v = sigrdze * sigane * simagle;
    cout << "moculoba = " << v << endl;
};

int main()
{
    otaxi otaxi;
   
    otaxi.moculoba();
    otaxi.fartobi();
   
   
}
