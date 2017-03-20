#include <iostream>

using namespace std;

const int root = 1;

void newtree(){
	left[root] = right[root] = 0;
	have_value[root] = false;
	cnt = root;
}

int newnode(){
	int u = ++cnt;
	left[u] = right[u] = 0;
	have_value[u] = false;
	return u;
}

int main()
{

	return 0;
}

