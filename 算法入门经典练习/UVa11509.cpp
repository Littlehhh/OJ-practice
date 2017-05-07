#include <iostream>

using namespace std;

const int maxn = 18 + 2;

int series[maxn];
int main()
{
	int n;
	
	int Max = -1;
	while(cin >> n && n)
	{
		for(int i = 0;i < n; i++)
			cin >> series[i];
		
		for(int i = 0;i < n; i++)
		{
			int temp = 1;
			for(int j = i;j < n; j++)
			{
				temp *= series[j];
				//cout << temp << endl;
				if( temp > Max)	Max = temp;	
			}
		}
		if( Max > 0) cout << Max;
		else cout << "0";
		cout << "\n";
	}

	return 0;
}

