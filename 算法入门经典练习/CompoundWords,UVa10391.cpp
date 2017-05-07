#include <iostream>
#include <set>
#include <string>


using namespace std;

set<string> dict;

int main()
{
	dict.clear();
	string word;
	while(cin >> word)
		dict.insert(word);
	for( set<string>::iterator i = dict.begin() ; i != dict.end()   ; ++i)
	{
		set<string>::iterator j = i;
		++j;
		for(/*set<string>::iterator j = dict.begin() */ ;j != dict.end()&& ( (*i)[0] == (*j)[0] )  ; ++j)
		{
			if( (*i) == (*j).substr(0,(*i).length() )  )
			{
				for( set<string>::iterator k = dict.begin(); k != dict.end() ;++k)
				{
					if( (*j) == (*i) + (*k) )
					{
						cout << (*j) << endl;
						break;
					}
				}
				
			}
			
			
		}
		
	}
	return 0;
}

