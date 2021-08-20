#include <iostream>
#include <list>
using namespace std;

void display(list <int> l1)
{
	for(auto &i : l1)
	    cout << i << "  ";				
	cout <<"\n";
}

bool even(const int& value) 
{ 
	return (value % 2) == 0; 
}

int main()
{
	list <int> list1 = {1,2,2,4,7,2,1,5,3,2,9};
	list <int> list2 = {1,2,3,4,5,6,7,8};

	display(list1);				//output = 1 2 2 4 7 2 1 5 3 2 9

	list1.remove(2);
	display(list1);				//output = 1 4 7 1 5 3 9 


	display(list2);				//output = 1 2 3 4 5 6 7 8

	list2.remove_if(even);
	display(list2);				//output = 1 3 5 7

	return 0;
}
