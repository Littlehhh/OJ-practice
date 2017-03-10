#include <iostream>

using namespace std;
const int maxn = 100000000;
typedef struct _cows{
	int year;
}cows;
cows *arr = new cows[maxn];
int main()
{
	
	
	int n;
	cin >> n;
	while( n != 0)
	{	
		
		arr[0].year = 4;
		int sum = 1;		
		for( int years = 1; years < n; years ++ )
		{
			for( int i = 0; i < sum; i++ )
			{
				if( arr[i].year >= 3)
				{
					arr[sum].year = 0;
					sum ++;
				}
				else
					arr[i].year ++;
			}
		}
		cout << sum;
		cin >> n;
	}

	return 0;
}
