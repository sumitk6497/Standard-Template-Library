#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vec = {1,2,3,4,5};

	vector<int>::iterator ptr = vec.begin();

	cout << "Position of ptr before advance() : " << *ptr << "  " << endl;
	
	advance(ptr,3);						//advance increament position of iterator

	cout << "Position of ptr after advance() : " << *ptr << "  " << endl;

	return 0;
}
