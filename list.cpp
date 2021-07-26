#include <iostream>
#include <list>
using namespace std;

int main()
{
	list <int> list1 = {40,7,15,3,29};
	list <int> list2 = {2,1,8,9};


	for(auto &i : list1)
	    cout << i << "  ";				//output = 40 7 15 3 29
	cout <<"\n";

	for(auto &i : list2)
	    cout << i << "  ";				//output = 2 1 8 9
	cout <<"\n";

	cout << "Size of list 1 = " << list1.size() << endl;		//output = 5
	cout << "First element of list 1 = " << list1.front() << endl;	//output = 40
	cout << "Last element of list 1 = " << list1.back() << endl;	//output = 29

	list1 = list2;

	for(auto &i : list1)
	    cout << i << "  ";				//output = 2 1 8 9
	cout <<"\n";


	list1.resize(8);
	for(auto &i : list1)
	    cout << i << "  ";				//output = 2 1 8 9 0 0 0
	cout <<"\n";

	return 0;
}
