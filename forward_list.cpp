#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
	forward_list <int> list1 = {4,7,1,3};

	cout << list1.front() << endl;			//output = 4

	list1.insert_after(list1.begin(),8);
	for(auto &i : list1)
	    cout << i << "  ";				//output = 4 8 7 1 3
	cout <<"\n";

	list1.reverse();
	for(auto &i : list1)
	    cout << i << "  ";				//output = 3 1 7 8 4
	cout <<"\n";

	list1.sort();
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 3 4 7 8
	cout <<"\n";

	list1.remove(4);
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 3 7 8
	cout <<"\n";

	list1.resize(2);
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 3
	cout <<"\n";

	list1.resize(5);
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 3 0 0 0
	cout <<"\n";

	return 0;
}
