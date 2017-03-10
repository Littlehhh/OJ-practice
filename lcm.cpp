#include <iostream>

using namespace std;

int main()
{
	int a,b,L;
	cin >> a >> b;
	for( int i = max(a,b); ; i++)
	{
		if( i%a==0 && i%b == 0)
		{
			L = i;
			break;
		}	
	}
	cout << L;
	return 0;
}

