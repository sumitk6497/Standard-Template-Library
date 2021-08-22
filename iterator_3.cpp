#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vec = {1,2,3,4,5};
	std::vector<int> vec1 = {10,20,30};

	vector<int>::iterator ptr = vec.begin();

	cout << "Vec elements : ";

	for(auto &x : vec)
		cout << x << "  ";
	cout << endl;

	advance(ptr,3);						//advance increament position of iterator

	copy(vec1.begin(), vec1.end(), inserter(vec,ptr));	//copying vec1 elements into vec using inserter()

	cout << "Vec elements after inserter() : ";
	for(auto &x : vec)
		cout << x << "  ";
	cout << endl;


	return 0;
}
