#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 28;

int arr[maxn][maxn];

int main()
{
	int n,m;
	int flag = -1;
	cin >> n >> m;
	for( int i = 0; i < n ; i++ )
	{	
		arr[i][0] = 65 + i;
		printf("%c",arr[i][0]);
		for( int j = 1; j < m ; j++ )
		{
			if(arr[i][j-1] == 65)
				flag = 1;
			if(flag == 1)
				arr[i][j] = arr[i][j-1] + 1;
			else
				arr[i][j] = arr[i][j-1] - 1;
			printf("%c",arr[i][j]);
		}
		flag = -1;
		printf("\n");
	}
	
	return 0;
}
