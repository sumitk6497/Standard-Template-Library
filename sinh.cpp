#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{	
	//x in value
	double x = 4.1;
	double result = sinh(x);

	cout << "sinh(4.1) = " << result << endl;


	//x in degree
	double xDegree = 90;
	x = xDegree * 3.14/180;
	result = sinh(x);

	cout << "sinh(90 degree) = " << result << endl;


	//x in negative value
	int x1 = -8;
	double result1 = sinh(x1);

	cout << "sinh(-8) = " << result1 << endl;
	

	//x with higher value
	double x2 = 3000.0;
	double result2 = sinh(x2);

	cout << "sinh(3000.0) = " << result2 << endl;
	

	return 0;
}
