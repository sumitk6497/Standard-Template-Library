#include <algorithm>
#include <iostream>
#include <functional>

using namespace std;

void display(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	cout << endl;
}


int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

	int n = sizeof(a) / sizeof(a[0]);
	cout << "The array before sorting is : \n";

	display(a, n);

	//sort the array
	sort(a, a + n);

	cout << "\nThe array after sorting is :\n";

	display(a, n);
	
	//sort the array
	sort(a, a + n, greater<int>());

	cout << "\nSorting in desending order :\n";

	display(a, n);
	return 0;
}

