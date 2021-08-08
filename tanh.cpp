#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{	
	//x in value
	double x = 4.1;
	double result = tanh(x);

	cout << "tanh(4.1) = " << result << endl;


	//x in degree
	double xDegree = 90;
	x = xDegree * 3.14/180;
	result = tanh(x);

	cout << "tanh(90 degree) = " << result << endl;


	//x in negative value
	int x1 = -8;
	double result1 = tanh(x1);

	cout << "tanh(-8) = " << result1 << endl;
	

	//x with higher value
	double x2 = 3000.0;
	double result2 = tanh(x2);

	cout << "tanh(3000.0) = " << result2 << endl;
	

	return 0;
}
