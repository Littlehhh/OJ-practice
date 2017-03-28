#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s))
	{
		stringstream ss(s);
		int a;
		while(ss >> a)
		{
			if(a < 0 || a > 255){
				cout << "N\n";break;
			}
		}
		cout << "Y\n" ; 
	}
	return 0;
}


