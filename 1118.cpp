#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long int num;

int main()
{
	
	while(cin >> num)
	{	
		int sum = 0;
		while( num > 0){
			sum += (num%10);
			num /= 10;
		}
		cout << sum << endl;
	}	
	return 0;
}


