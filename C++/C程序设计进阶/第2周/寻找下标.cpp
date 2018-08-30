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
			cout << i;  //因为cin流是整体输入完成的，所以cout流在其后输出
			return 0; //只要一个结果，这里结束函数
		}
	}
	cout << 'N';
	return 0;
}