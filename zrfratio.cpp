#include <iostream>

using namespace std;

class zrf_Ratio{
	private:
		int a,b;
	public:
		
		void huajian( )
		{
			for( int i = 2 ; i <= min(a,b) ; i++)
			{
				if( (a%i == 0) && (b%i == 0) )
				{
					a = a/i;
					b = b/i;
				}
			}
		}
		friend ostream& operator << ( ostream& cout , const zrf_Ratio& a);
		friend istream& operator >> ( istream& cin , zrf_Ratio& a);
		friend bool operator == ( const zrf_Ratio& a , const zrf_Ratio& b);
		friend bool operator < ( const zrf_Ratio& a , const zrf_Ratio& b);
	
	
};

ostream& operator << ( ostream& cout , const zrf_Ratio& a)
{
	cout << a.a << "/" << a.b;
	return cout;
}
istream& operator >> ( istream& cin , zrf_Ratio& a)
{
	cin >> a.a >> a.b;
	return cin;
}
bool operator == ( const zrf_Ratio& a , const zrf_Ratio& b)
{
	if( a.a == b.a && a.b == b.b )
		return true;
	else 
		return false;
}
bool operator < ( const zrf_Ratio& a , const zrf_Ratio& b)
{
	if( a.a/(double)a.b < b.a/(double)b.b )
		return true;
	else 
		return false;	

}

//zrf is:1/7; ssh is:26/25
//0; 1
int main()
{
	zrf_Ratio A,B;

	cin >> A >> B;
	A.huajian();
	B.huajian();
	cout << "zrf is:" << A << ";" << "ssh is:" << B << endl;
	cout << "(zrf==ssh) is:" << (int)(A == B) << ";" << "(zrf<ssh) is:" << (int)(A < B);
	
	return 0;
}
