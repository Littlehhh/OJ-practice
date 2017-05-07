#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
#include <sstream>
using namespace std;
const int maxn = 1000 + 10;
const int maxcol = 180 + 5;
vector<string> words[maxn];
int MaxLenOfCol[maxcol];
int main()
{
	string line,single;
	int rownum = 0;
	
	while(getline(cin,line))
	{
		stringstream col(line);
		int colnum = 0;
		while(col >> single)
		{	
			MaxLenOfCol[colnum] = max(MaxLenOfCol[colnum],(int)single.length());
			words[rownum].push_back(single);
			colnum ++ ;
		}
		rownum++;
		
	}
	for( int i = 0; i < rownum ; i++)
	{
		for( int j = 0; j < (int)words[i].size() ; j++)
		{
			cout << words[i][j];
			int k = MaxLenOfCol[j] - (int)words[i][j].length() + 1;
			while( k-- )
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	

	return 0;
}

