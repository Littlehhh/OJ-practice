#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//algorithm
const int maxn = 100000;
int main()
{
	int arr[maxn];
	int n;
	cin >> n;
	for( int i = 0; i<n ; i++ )
		cin >> arr[i];
	sort(arr, arr + n );
	for( int i = 0; i<n ; i++ )

		cout << arr[i] << " ";
	return 0;
}



