
#include <cstdio>

using namespace std;

int a, b, maxd;

typedef long long LL;

LL gcd(LL a, LL b){
	return b == 0 ? a : gcd(b, a%b);
}

inline int get_first(LL a, LL b){
	return b/a + 1;
}

const int maxn = 100 + 5;

LL v[maxn], ans[maxn];


