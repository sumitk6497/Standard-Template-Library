#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int a[5];

	memset(a, 0, sizeof(a));		//set elements with 0

	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;


	memset(a, -1, sizeof(a));		//set elements with -1

	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;


	memset(a, 10, sizeof(a)); 		//can't set other value

	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;

	return 0;
}

