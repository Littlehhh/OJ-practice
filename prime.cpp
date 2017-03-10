#include <iostream>

using namespace std;

const int maxn = 100000;

int arr[maxn];
int flag[maxn];
int main()
{
	int n;
	cin >> n;
	
	for( int i = 0; i <= n; i++ )
	{
		arr[i] = i;
		flag[i] = 1;
	}
	flag[0] = 0;
	flag[1] = 0;
	for( int i = 2; i < n; i++  )
	{
		for( int j = i+1 ; j <= n ; j++)
		{
			if( arr[j] % arr[i] == 0)
				flag[j] = 0;	
		}
		
	}
	for( int i = 0; i <= n; i++ )
	{
		if( flag[i] == 1 )
		{
			cout << arr[i] << endl;
		}
	}

	return 0;
}

