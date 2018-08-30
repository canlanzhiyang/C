#include <iostream>
#include<iomanip>
using namespace std;

int main( )
{
	float a[4] = { 0 };
	float z[3] = { 0 };
	for ( int r = 0; r <3; r++ ) //三个人
	{
		int n,m;
		char v;
		float b;
		cin >> n;
		cin >> m;
		for ( int j = 0; j < m; j++ )
		{
			cin >> v;
			cin >> b;
			a[n] += b;
			switch (v){
			case 'A':
				z[0] += b; break;
			case 'B':
				z[1] += b; break;
			case 'C':
				z[2] += b; break;
			}

		}
			
	}

	cout << 1 << ' ' << fixed << setprecision( 2 ) << a[1] << endl;
	cout << 2 << ' ' << fixed << setprecision( 2 ) << a[2] << endl;
	cout << 3 << ' ' << fixed << setprecision( 2 ) << a[3] << endl;
	cout << 'A' << ' ' << fixed << setprecision( 2 ) << z[0] << endl;
	cout << 'B' << ' ' << fixed << setprecision( 2 ) << z[1] << endl;
	cout << 'C' << ' ' << fixed << setprecision( 2 ) << z[2] << endl;
	return 0;
    
}
