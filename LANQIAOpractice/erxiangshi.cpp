#include <iostream>

using namespace std;

int Cnk( int k, int n)
{
	if( k==0 || k==n)
		return 1;
	else
	{
		int result;
		result = Cnk(k,n-1) + Cnk(k-1,n-1);
		return result;
	}
}



int main()
{
	int k,n;
	cin >> k >> n;
	cout << Cnk(k,n);
	return 0;
}

