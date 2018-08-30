#include <iostream>
using namespace std;

//四大湖

int main( )
{
	for ( int d = 1; d <= 4; d++ )
	{
		for ( int p = 1; p <= 4; p++ )
		{
			for ( int h = 1; h <= 4; h++ )
			{
				int t;
				t = 10 - d - p - h;
				if (
					(d!=p)&&(d!=h)&&(d!=t)&&(p!=h)&&(p!=t)&&(h!=t)
					&& ( ( d == 1 ) + ( h == 4 ) + ( p == 3 ) == 1 )
					&& ( ( h == 1 ) + ( d == 4 ) + ( p == 2 ) + ( t == 3 ) == 1 )
					&& ( ( h == 4 ) + ( d == 3 ) == 1 )
					&& ( ( p == 1 ) + ( t == 4 ) + ( h == 2 ) + ( d == 3 ) == 1 )
					)
				{
					cout << p<<endl;
					cout << d<<endl;
					cout << t<<endl;
					cout << h<<endl;
					return 0;
				}
			}
		}
	}
	return 0;
}