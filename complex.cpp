#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

struct complex{
	double real;
	double imag;
};
complex * operator + ( const complex&a, const complex&b)
{
	complex * cpl = new complex;
	cpl->real = a.real + b.real;
	cpl->imag = a.imag + b.imag;
	return cpl;
}
complex * operator - ( const complex&a, const complex&b)
{
	complex * cpl = new complex;
	cpl->real = a.real - b.real;
	cpl->imag = a.imag - b.imag;
	return cpl;
}
complex * operator * ( const complex&a, const complex&b)
{
	complex * cpl = new complex;
	cpl->real = a.real * b.real - a.imag*b.imag;
	cpl->imag = a.real * b.imag + a.imag*b.real;
	return cpl;
}
complex * operator / ( const complex&a, const complex&b)
{
	complex * cpl = new complex;
/*	if( b.imag == 0.0)
		cpl->imag = 0;
	else
		cpl->imag = a.imag / b.imag;
	if( b.real == 0.0)
		cpl->real = 0;
	else	
		cpl->real = a.real / b.real;*/
	cpl->real = (a.real*b.real + a.imag*b.imag)/(pow(b.real,2)+pow(b.imag,2));
	cpl->imag = (a.imag*b.real - a.real*b.imag)/(pow(b.real,2)+pow(b.imag,2));
	return cpl;
}
istream& operator >> ( istream& cin, complex& a)
{
	cin >> a.real >> a.imag;
	return cin;
}

int main()
{
	complex A,B;
	complex *R;
	char o;
	cin >> o >> A >> B;
	if( o == '+' )
		R = A + B;
	if( o == '-' )
		R = A - B;
	if( o == '*' )
		R = A * B;
	if( o == '/' )
		R = A / B;
	printf("%.2f+%.2fi",R->real,R->imag);
		
	return 0;
}

