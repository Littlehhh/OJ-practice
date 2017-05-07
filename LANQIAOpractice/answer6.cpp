#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;

int vis[9];
int pa[9];
int findset( int x ){
	
	while( pa[x] != x ) x = pa[x];
	return x;
}
void join( int a, int b){
	int x = findset(a), y = findset(b);
	if( x != y )
	pa[x] = y;
}



int main()
{
	int n;

	while(cin >> n){
		for( int i = 0; i < n; i++){
			int a,b;
			cin >> a >> b;
			join(a, b);			
		}
	}	


	return 0;
}


