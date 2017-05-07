#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
	string S;
	int n;
	cin >> n;
	getline(cin,S);
	while(getline(cin,S)){
		stringstream ss(S);
		string word;
		if( n > 0){
			cout << S << "\n\n";
			n--;
		}
		else{
			while(ss >> word )
			cout << word << "\n\n";
		}
	}

	return 0;
}


