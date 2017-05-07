#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int maxn = 20;
int a[maxn];
int N,K;
long long int n;
long long int factor( int n){
	if( n == 1)
		return 10;
	else 
		return 10*factor(--n);
}
bool judge( long long int num ){
	if(num/(n/10) == 0) return false;
	int pre = -1;
	for( int i = 0; i < N; i++){
		if( ( num%10 == 0 && pre == 0) || (num/10)%10 >= K)
			return false;
		pre = num % 10;
		num = num / 10;
		
	}
	return true;
}
int main()
{	

	
	long long int num = 0;
	cin >> N >> K;
	n = factor(N);
	for(long long int i = 0 ; i < n ; i++ )
	{
		if( judge(i)) num++;
	}
	cout << num;
	return 0;
}


