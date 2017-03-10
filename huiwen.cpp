#include <iostream>
#include <cstdio>

using namespace std;

const int maxn = 10000;
int main()
{	
	int arr[maxn];
	int num = 0;
	for(int i = 1000 ; i <= 9999 ; i++)
	{

		if( (i%100 == (i/1000 + ((i/100)%10) * 10)) )
		{
			arr[num] = i;

			num++;
		}
	}

	for(int i=0;i<num;i++)
		cout << arr[i] <<endl;
	
	return 0;
}
