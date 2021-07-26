#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
	forward_list <int> list1 = {4,7,1,3};
	forward_list <int> list2 = {2,1,8,9};


	list1.sort();
	list2.sort();
	list1.merge(list2);				//if we don't sort lists before merge, it will concatenate both lists
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 1 2 3 4 7 8 9 	//without sort output = 4 7 1 3 2 1 8 9
	cout <<"\n";

	forward_list <int> list3 = {14,70,1,3};
	forward_list <int> list4 = {2,10,81,9};

	list3.splice_after(list3.begin(), list4);	//splice_after add elements from one list to another at specific position
	for(auto &i : list3)
	    cout << i << "  ";				//output = 14 2 10 81 9 70 1 3
	cout <<"\n";

	cout << "Size of list 3 = " << distance(list3.begin(), list3.end()) << endl;
	cout << "Size of list 4 = " << distance(list4.begin(), list4.end()) << endl;

/*	list1.resize(2);
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 3
	cout <<"\n";

	list1.resize(5);
	for(auto &i : list1)
	    cout << i << "  ";				//output = 1 3 0 0 0
	cout <<"\n";
*/
	return 0;
}
