#include <iostream>
using namespace std;


int funqcia(int x, int y, int z){
    int p;
	p = x + y + z;
	
	return p;
}

int main()
{
	int a, b, c, d, e, f, p1, p2;

	cout << "sheiyvanet pirveli samkutxedis gverdebi" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	p1 = funqcia(a, b, c);
	cout << "p1 = " << p1 << endl;

	cout << "sheiyvanet meore samkutxedis gverdebi" << endl;
	cin >> d;
	cin >> e;
	cin >> f;

	p2 = funqcia(d, e, f);
	cout << "p2 = " << p2 << endl;
	
	if (p1 > p2){
	    cout << "p1 metia p2ze " << p1 - p2 << " -it" << endl;
	}
	else{
	    cout << "p2 metia p1ze " << p2 - p1 << " -it" << endl;
	}   
}
