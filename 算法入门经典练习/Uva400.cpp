#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int maxcol = 60;
const int maxn = 100 + 5;
string filename[maxn];

int main()
{
	int n;
	while(cin >> n)
	{
		int M = 0;
		for(int i = 0; i < n ;i++)
		{
			cin >> filename[i];
			M = max(M, (int)filename[i].length());
		}
		
		
		sort(filename,filename+n);
		

	}
	
	return 0;
}

