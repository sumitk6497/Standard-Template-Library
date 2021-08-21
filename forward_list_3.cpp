#include <iostream>
#include <forward_list>
using namespace std;

bool even(const int& value) 
{ 
	return (value % 2) == 0; 
}

int main()
{
	forward_list <int> list;
	forward_list <int> list1 = {1,1,1,2,2,3,4,5,6,7,8};

	cout <<"max size of list : " << list.max_size() << endl;	//576460752303423487

	cout << "List elements :";
	for(auto &i : list1)
	    cout << i << "  ";				//output =  1 1 1 2 2 3 4 5 6 7 8
	cout <<"\n";

	list1.remove(2);
	cout << "List elements after remove(2) :";
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 1 1 3 4 5 7 8 
	cout <<"\n";

	list1.remove_if(even);
	cout << "List elements after remove_if(even) :";
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 1 1 3 5 7
	cout <<"\n";

	return 0;
}
