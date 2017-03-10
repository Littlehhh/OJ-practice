#include <iostream>

using namespace std;

const int maxn = 60;
int cows[maxn];
int main()
{
	
	int n;
	cin >> n;
	while( n != 0 )
	{
		for( int i = 1; i <= 4 ; i ++ )
			cows[i] = i;
			
		for( int i = 5; i <= n ; i ++ )
		{
			cows[i] = cows[i-1]+cows[i-3];
		}
		cout << cows[n] << endl;
		cin >> n;	
	}
	
	
		
	return 0;
}

