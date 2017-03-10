#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

const double pi = acos(-1);

int main()
{
	int r;
	double area;
	cin >> r;
	area = pi*r*r;
	printf("%.7f",area);
}
