#include <bits/stdc++.h>
using namespace std;

int A[101];
void print_permutation( int n, int* A, int cur){
	if(cur == n) { //递归边界
		for( int i = 0; i < n; i++) printf("%d",A[i]);
		printf("\n"); 
	} 
	else
		for( int i = 0; i < n; i++){ //尝试填各种整数 
			int ok = 1;
			for( int j = 0; j < cur; j++)
				if(A[j] == i) ok = 0;
			if(ok){
				A[cur] = i;
				print_permutation(n, A, cur+1);
			} 
		}
}
int main()
{
	int n;
	cin >> n;
	print_permutation(n, A, 0);
	return 0;
}


