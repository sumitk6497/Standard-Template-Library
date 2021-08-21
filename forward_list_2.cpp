#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
	forward_list <int> list1 = {1,1,1,2,2,2,2,3,2,2,4,5};


	cout << "List elements :";
	for(auto &i : list1)
	    cout << i << "  ";				//output =  1 1 1 2 2 2 2 3 2 2 4 5
	cout <<"\n";

	list1.unique();
	cout << "List elements after unique() :";
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 2 3 2 4 5
	cout <<"\n";

	list1.sort();
	cout << "List elements after sort() :";
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 2 2 3 4 5
	cout <<"\n";

	list1.remove(2);
	cout << "List elements after remove(2) :";
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 3 4 5
	cout <<"\n";

	return 0;
}
