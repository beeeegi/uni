#include <iostream>

using namespace std;

class studenti
{
    public:
     string saxeli;
     string gvari;
     string saswavlebeli;
     
     int asaki;
     int simagle;
} studenti2;
int main()
{
    studenti studenti1;
    cout<<"shemoiyvanet pirveli studentis monacemebi\n";
    cin>>studenti1.saxeli>>studenti1.gvari>>studenti1.saswavlebeli>>studenti1.asaki>>studenti1.simagle;
    
    
     cout<<"studentis saxeli "<<studenti1.saxeli <<endl;

     cout<<"studentis gvari "<<studenti1.gvari <<endl;
      cout<<"studentis saswavlebeli"<<studenti1.saswavlebeli <<endl;

     cout<<"studentis asaki "<<studenti1.asaki <<endl;
      cout<<"studentis simagle "<<studenti1.simagle <<endl;
       
        cout<<"shemoiyvanet meore studentis monacemebi\n";
    cin>>studenti2.saxeli>>studenti2.gvari>>studenti2.saswavlebeli>>studenti2.asaki>>studenti2.simagle;
    
    
     cout<<"studentis saxeli "<<studenti2.saxeli <<endl;

     cout<<"studentis gvari "<<studenti2.gvari <<endl;
      cout<<"studentis saswavlebeli"<<studenti2.saswavlebeli <<endl;

     cout<<"studentis asaki "<<studenti2.asaki <<endl;
      cout<<"studentis simagle "<<studenti2.simagle <<endl;
}
