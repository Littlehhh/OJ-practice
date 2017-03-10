#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int maxn = 11000;
int arr[maxn];
int main()
{
	int n;
	int min = 10001;
	int max = -10001;
	int sum = 0;
	cin >> n;

/*	for(int i = 0; i< n; i++ )
	{
		cin >> arr[i];
		if( min > arr[i] )
		{
			min = arr[i];
		}
		if( max < arr[i] )
		{
			max = arr[i];
		}
		
	}*/
	int i = 0;
	int j = n-1; 
	int tmin,tmax;
	for(; i <= j ; ++i,--j )
	{
		cin >> arr[i];
		cin >> arr[j];
		if( i != j )
		{
			sum += arr[i];
			sum += arr[j];
		}
		else
			sum += arr[i];
				
		if( arr[i] < arr[j] )
		{
			tmax = arr[j];
			tmin = arr[i];
			
		}
		else
		{
			tmax = arr[i];
			tmin = arr[j];
			
		}
		if( min > tmin )
		{
			min = tmin;
		}
		if( max < tmax )
		{
			max = tmax;
		}
	}


	cout << max << endl;
	cout << min << endl;
	cout << sum << endl;
	return 0;
}
