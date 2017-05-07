#include <iostream>
#include <set>
#include <vector>
#include <cmath>
const int times = 1000;


using namespace std;

int main()
{
	int m,n;
	int flag = 0;
	cin >> m;
	while(m--)
	{
		cin >> n;
		vector<int> aim;
		vector<int> temp(n,0);
		aim.clear();
		
		for( int i = 0; i<n ; i++ )
		{
			int num;
			cin >> num;
			aim.push_back(num);
		}
		for( int i = 0; i < times ; i++ )
		{

					
			for( int j = 0; j < n ; j++ )
			{
				int num;
				num = abs(aim[j] - aim[(j+1)%4]);

				temp[j] = num;

			}
			aim.swap(temp);
			flag = 0;
			for(int j = 0; j<n ; j++ )
			{
				if(aim[j] != 0)
					break;
				else
					flag++;
			}
			if(flag == n)
			{
				cout << "ZERO";
				break;
			}

		}
		if(flag != n )
			cout << "LOOP";
		
	}

	return 0;
}

