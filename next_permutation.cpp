#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <vector>

using namespace std;


void print( vector<int>& v){
	for( vector<int>::iterator it = v.begin() ; it != v.end() ; ++it ){
		cout << *it << " ";
		
	}
	cout << "\n";


}
void print_permutation(vector<int>& v , set<int>::iterator& s){
	
	if( v.size() == 10 ){
		print(v);
		v.clear();
	} 
	
	else{
		int i = 0;
		
		for(set<int>::iterator it = s.begin() ; it != s.end() ; ++it )
		{
			int ok = 1;
			
			for( int j = 0; j < i; j++)
			{
				if( v[j] == *it)
					ok = 0;
				
			}
			if(ok){
				v.push_back(*it);
//				cout << '1';
				print_permutation(v,s+1);
			}

			i++;	
		}
	}
	
}


int main()
{
	vector<int> v;
	set<int> s;
	s.clear();
	for(int i = 0; i < 10 ; i++){
		s.insert(i);
	}
	set<int>::iterator it = s.begin();
	print_permutation( v ,it);
	return 0;
}


