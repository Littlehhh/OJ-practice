#include <iostream>

using namespace std;

const int maxn = 110;

char arr[maxn];
int main()
{	
	int i = 0;
	for( ; arr[i] != 0 ; i++  )
		cin >> arr[i];
	for( ; i>-1 ; i--  )
		cout << arr[i];
	return 0;
}

