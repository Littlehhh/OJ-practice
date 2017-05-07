#include <iostream>
#include <set>
#include <cstring>
using namespace std;

multiset<int> number;
void count(int a[],int number){
	int j = 0;
	while(number)
	{
		
		a[j++] = number % 10;
		number /= 10;
	}

}

int main()
{

	
	
	
	int x,y,xx,yy,zz,result;
	int a[5];
	int flag = 0;
	for(  x = 100 ; x <= 350;x++)
	{
		
		for( y = 1 ; y <= 350; y++)
		{	
			number.clear();
			count(a,y);

			xx = x*a[0];
			yy = x*a[1];
			zz = x*a[2];
			if( xx < 1000 && yy<1000 && zz<1000)
			{
				number.insert(a,a+3);
				count(a,x);
				number.insert(a,a+3);
				count(a,xx);
				number.insert(a,a+3);
				count(a,yy);
				number.insert(a,a+3);
				count(a,zz);
				number.insert(a,a+3);
				result = x*y;
				if(result < 100000 && result > 9999)
				{
					count(a,result);
					number.insert(a,a+5);
				}
				else
					continue;					
			}
			else
					continue;
			int ti = 0;
			for( int i=0;i<10;i++)
			{
				if( number.count(i) == 2)
				{
					ti++;
				}	
				
			}
			if(ti == 10)
				cout << result << endl;
			
		}
	}

	return 0;
}

