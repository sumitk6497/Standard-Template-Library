#include <iostream>
#include <list>
using namespace std;

void display(list <int> l1)
{
	for(auto &i : l1)
	    cout << i << "  ";				
	cout <<"\n";
}

int main()
{
	list <int> list1 = {40,7,15,3,29};

	display(list1);				//output = 40 7 15 3 29

	list1.push_back(1);
	display(list1);				//output = 40 7 15 3 29 1

	list1.push_front(2);
	display(list1);				//output = 2 40 7 15 3 29 1

	list1.pop_front();
	display(list1);				//output = 40 7 15 3 29 1

	list1.pop_back();
	display(list1);				//output = 40 7 15 3 29

	list1.resize(8);
	display(list1);				//output = 40 7 15 3 29 0 0 0
	
	list1.remove(40);
	display(list1);				//output = 7 15 3 29 0 0 0

	list1.unique();
	list1.unique();
	display(list1);				//output = 7 15 3 29 0

	list1.sort();
	display(list1);				//output = 0 3 7 15 29 

	return 0;
}
