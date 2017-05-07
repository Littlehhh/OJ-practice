#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(getline(cin,s))
	{
		
		stringstream ss(s);
		int num = -1;
		char a;
		bool flag = true;
		while(ss >> a)
		{		
				
			
			if( a == '.' ){
				
				if( num < 0 || num > 255 )
				{
					
					cout << "N\n"; flag = false;break;
				}	
				num = -1;	
			}
			else{
				if( a <'0' || a > '9' )
				{
				cout << "N\n"; flag = false;break;
				}
				else{
				num = (num == -1 ? (a-'0') : (num * 10 + (a-'0')));
				}
			}
			

		}
		
		if( (num < 0 || num > 255) && flag == true )
		{
			
			cout << "N\n";flag = false;
		}
		
		if(flag)
			cout << "Y\n";
		
		
		
		 
	}
	return 0;
} 


