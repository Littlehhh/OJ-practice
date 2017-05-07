#include <set>
#include <vector>
#include <iostream>
using namespace std;


void print(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
		cout << *it << " ";

	}
	cout << "\n";


}
void print_permutation(int n, vector<int> v, set<int> s) {

	if (s.empty()) {
		print(v);
	}

	else {
		
		for (int i = 1 ; i <= n; i++)
		{

			v.insert( v.end(), i);
			s.erase(s.find(i));
			print_permutation(n, v, s);
		}
	}

}


int main()
{
	int n;
	set<int> s;

	cin >> n;
	vector<int> v;
	for (int i = 1; i <= n; i++)
	{
		s.insert(i);
	}
	print_permutation(n, v, s);
	return 0;
}

