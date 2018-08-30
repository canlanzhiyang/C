#include <iostream>
#include <iomanip>

using namespace std;

int main( )
{
	char c;
	int y , m , d;
	bool ly;
	cin >> y >> c >> m >> c >> d;
	if ( ( y % 4 == 0 ) && ( y % 400 != 0 ) )
	{
		switch ( m )
		{
		default:
			switch ( d )
			{
			case 31:
				m++;
				d = 1;
				break;
			default: 
				d++;
				break;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			switch ( d )
			{
			case 30:
				m++;
				d = 1;
				break;
			default:
				d++;
				break;
			}
			break;
		case 2:
			switch ( d )
			{
			case 29:
				m++;
				d = 1;
				break;
			default:
				d++;
				break;
			}
			break;
		case 12:
			switch ( d )
			{
			case 31:
				y++;
				m = 1;
				d = 1;
				break;
			default:
				d++;
				break;
			}
			break;
		}
	}
	else
	{
		switch ( m )
		{
		default:
			switch ( d )
			{
			case 31:
				m++;
				d = 1;
				break;
			default:
				d++;
				break;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			switch ( d )
			{
			case 30:
				m++;
				d = 1;
				break;
			default:
				d++;
				break;
			}
			break;
		case 2:
			switch ( d )
			{
			case 28:
				m++;
				d = 1;
				break;
			default:
				d++;
				break;
			}
			break;
		case 12:
			switch ( d )
			{
			case 31:
				y++;
				m = 1;
				d = 1;
				break;
			default:
				d++;
				break;
			}
			break;
		}
	}

	cout << y << '-'<<setw( 2 ) << setfill('0' ) << m <<'-' << setw( 2 ) << setfill( '0' ) << d;
	return 0;
}