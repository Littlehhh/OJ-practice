#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	long long int num;
	int n;
	cin >> n;
	for( int i = 0; i < n; i++ )
	{
		scanf("%x",&num);
		printf("%o",num);
	}
	
	return 0;
}
