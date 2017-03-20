#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

const int maxv = 10000 + 10;
int in_order[maxv],post_order[maxv],lch[maxv],rch[maxv];
int n;

bool readlist(int *a){
	string line;
	if( !getline(cin, line ) ) return false;
	string stream ss(line);
	n = 0;
	int x;
	while(ss>>x) a[n++] = x;
	return n > 0;
}

int build( int L1, int R1, int L2, int R2){
	if(L1 > R1) return 0;
	int root = post_order[R2];
	int p = L1;
	while(in_order[p] != root) p++;
	int cnt = p - L1;
	lch[root] = build(L1,p-1,L2,L2+cnt-1);
	rch[root] = build(p+1,R1,L2+cnt,R2-1);
	return root;
}

int main()
{

	return 0;
}

