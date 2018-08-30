#include <iostream>
using namespace std;

int main( )
{
	int n , num;
	cin >> n;
	for ( int i = 0; i < n; i++ )
	{
		cin >> num;
		if ( i == num )
		{
			cout << i;
			return 0;
		}
	}
	cout << 'N';
	return 0;
}