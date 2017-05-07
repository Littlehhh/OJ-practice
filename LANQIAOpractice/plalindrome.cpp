#include <iostream>
#include <cstdio>

using namespace std;

const int maxn = 10000;
int main()
{	
	int arr[maxn];
	int n;
	int num = 0;
	cin >> n;
	for(int i = 10001 ; i <= 99999 ; i++)
	{

		if( (i%100 == (i/10000 + ((i/1000)%10) * 10)) && ((i/10000 + (i/ 1000)%10 + (i/ 100)%10 + (i/10)%10 + i%10) == n)  )
		{
			arr[num] = i;

			num++;
		}
	}
	for(int i = 100001 ; i <= 999999 ; i++)
	{
		if( (i%1000 == (i/100000 + ((i/10000)%10)*10 + ((i/1000)%10) * 100)) && ((i/100000 + (i/10000)%10 + (i/ 1000)%10 + (i/ 100)%10 + (i/10)%10 + i%10) == n)    )
		{
			arr[num] = i;
			num++;
		}
	}
	for(int i=0;i<num;i++)
		cout << arr[i] << endl;
	
	return 0;
} 
