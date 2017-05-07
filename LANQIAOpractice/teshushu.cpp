#include <iostream>
#include <cstdio>
#include <cmath>
#define P(x) (x*x*x) 
using namespace std;

const int maxn = 10000;
int main()
{	
	int arr[maxn];
	int num = 0;
	for(int i = 100 ; i <= 999 ; i++)
	{

		if( ( i == (P((i/100)) + P(((i/10)%10)) + P((i%10)))))
		{
			arr[num] = i;

			num++;
		}
	}

	for(int i=0;i<num;i++)
		cout << arr[i] <<endl;
	
	return 0;
}

