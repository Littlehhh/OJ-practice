#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int main()
{
	srand(time(0));
	vector<int> arr;
	arr.clear();
	for( int i = 0; i < 1000000 ; i++)
		arr.push_back(rand());
	sort(arr.begin(),arr.end());
	for( int i = 0; i < arr.size() - 1 ; i++)
		assert(arr[i] <= arr[i+1]);
		
	return 0;
}

