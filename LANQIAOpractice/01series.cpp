#include <cstdio>

using namespace std;


int main()
{
	int num = 0;
	int mod;
	int chushu;
	for( ; num < 32 ; num ++ )
	{
		int temp = num;
		int sum =0;
		int i=1;
		while( temp != 0 )
		{
			mod = temp%2;
			temp = temp/2;
			
			sum += mod * i;
			i*=10;
		}
		printf("%05d\n",sum);

	}
		
	return 0;
}
