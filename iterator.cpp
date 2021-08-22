#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vec = {1,2,3,4,5};

	vector<int>::iterator ptr;

	for(ptr = vec.begin(); ptr < vec.end(); ptr++)
		cout << *ptr << "  ";

	cout << endl;
	
	return 0;
}
