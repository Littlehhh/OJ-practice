#include <iostream>
using namespace std;
const int mod = 10007;
const int maxn = 1000000;
int fib[maxn];
int main()
{
	int n;
	cin >> n;
	fib[1] = fib[2] = 1;
	for(int i = 3; i <= n ; i++)
	{
		fib[i] = (fib[i-1]+fib[i-2])%mod;
	}	
	cout << fib[n];
	
}


