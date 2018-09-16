#include <iostream>
using namespace std;

char x[501] = { 0 };

int shuchu(int y)
{
	if ( y <= 1 )
	{
		cout << "End" << endl;
		return 0;
	}
	else
	{
		if ( y % 2 == 0 )
		{
			cout << y << " / 2 = " << y / 2 << endl;
			shuchu( y / 2 );
		}
		else
		{
			cout << y << " * 3 + 1 = " << y * 3 + 1 << endl;
			shuchu( y * 3 + 1 );
		}
	}
}

int main( )
{
	int x;
	cin >> x;
	shuchu(x);
	return 0;
}