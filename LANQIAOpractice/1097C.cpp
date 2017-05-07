#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int maxn = 100+5;
int a[maxn][maxn];
int main()
{
	int n;
	while(cin >> n)
	
	
	for( int i = 0; i < n ; i++ ){
		int y =  i;
		int x = 2 + i;
		if( i == 0) a[0][0] = 1;	
		else a[i][0] = a[i-1][0] + y;
		
		cout << a[i][0] ;
		for( int j = 1; j < n - i; j++){
			cout << " ";
			a[i][j] = a[i][j-1] + x;
			x++; 

				cout << a[i][j] ;
		}
		cout << "\n";
		
	}
	return 0;
}


