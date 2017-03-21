#include <bits/stdc++.h>

using namespace std;

map<char, int > arr;
set<char> alpha;
long long int factorial(int num){
	long long int result = 1;
	for(int i = num ; i > 0; i--)
	{
		result *= i;
	}
	return result;
}
int main()
{
	//char a[17];
	cout << factorial(15);
	char b[18] = "bckfqlajhemgiodnp";
	unsigned long long  int result = 0;
	for( int i=0;i<17;i++)
	{
		alpha.insert('a'+i);
		
	}
	for( set<char>::iterator it = alpha.begin();it != alpha.end();++it)
	{
		cout << *it;
	}
	for( int i = 0;i < 17 ;i++)
	{
		int count = 0;
		for( set<char>::iterator it = alpha.begin();it != alpha.end();++it)
		{
			if( *it == b[i]) break;
			count++;
		}
		
		result = result + count * factorial(16-i);
		alpha.erase(b[i]);
		cout << b[i]  << "\n";
		cout << count << "\n";
		cout << result << "\n";
	}
	cout << result;
/*char a[17];

	for( int i=0;i<17;i++)
	{
		a[i] = 'a' + i;
		
		cout << a[i];
	}
	long long int i = 0;
	while(next_permutation(a,a+17))
	{

		i++;
		if( strcmp(a,"bckfqlajhemgiodnp" ) == 0)
			break;
		
		//cout <<  endl;
	}
	cout << i;*/	
	return 0;
}

