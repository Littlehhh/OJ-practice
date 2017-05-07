#include <iostream>

const int maxn = 35;
using namespace std;
int a[maxn][maxn];

int main()
{
	int n;
	cin >> n;
	
	for(int i = 1; i <= n ; i++ )
	{
		
		for( int j = 1; j <= i ; j++ )
		{
			if( j == 1 || j == i )
			{
				a[i][j] = 1;
			
			}
			else
			{
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
			cout << a[i][j] << " ";
			
		}
		cout << endl;
	}
	
	
	return 0;
}
