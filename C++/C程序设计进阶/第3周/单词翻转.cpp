#include <iostream>
using namespace std;

char x[501] = { 0 };

int shuchu(int y)
{
	if (x[y]!='\0' )
	{
		shuchu( y + 1 );
		cout << x[y];
	}
	return 0;
}

int main( )
{
	cin.getline( x , 500 );
	shuchu(0);
	return 0;
}
