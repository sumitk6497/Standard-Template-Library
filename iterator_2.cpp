#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vec = {1,2,3,4,5};

	vector<int>::iterator ptr = vec.begin();
	vector<int>::iterator qtr = vec.end();

	cout << "Position of ptr before next() : " << *ptr << "  " << endl;
	cout << "Position of qtr before prev() : " << *qtr << "  " << endl;
	
	auto it = next(ptr,3);						//using next() to return new iterator points to 4
	auto it1 = prev(qtr,3);						//using preq() to return new iterator points to 3

	cout << "Position of new iterator using next() : it =  " << *it << "  " << endl;
	cout << "Position of new iterator using prev() : it1 = " << *it1 << "  " << endl;

	return 0;
}
