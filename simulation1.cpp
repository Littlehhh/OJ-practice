#include <iostream>

using namespace std;

int main()
{
	int x,year;
	for( year = 1800 ;  ; year++)
	{	
		for( x = 40; (x*x - year)<=x  ; x ++  )
			if( (x*x - year) == x  )
			{
					cout << year << "\n";
					cout << x;

					return 0;
			} 
	}
	cout << year << "\n";
	cout << x;

	return 0;
}

