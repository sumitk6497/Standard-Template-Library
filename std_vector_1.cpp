#include <iostream>
#include <vector>
using namespace std;

int main()
{
	std::vector<int> Vec;				//declaration
	std::vector<int> Vec1;				//declaration
	Vec1.reserve(100);
	int i,j;

	for(i = 0; i < 32; i++)
	{
	    Vec.push_back(i);
	    cout << "Size = " << Vec.size() << "  Capacity = " << Vec.capacity() << endl;	//capacity will increase
	}

	printf("Vec = ");
	for(j = 0; j < Vec.size(); j++)
	    cout << Vec.at(j) << " ";
	cout << "\n";

	for(i = 0; i < 32; i++)
	{
	    Vec1.push_back(i);
	    cout << "Size = " << Vec1.size() << "  Capacity = " << Vec1.capacity() << endl;	//capacity will constant
	}

	printf("Vec1 = ");
	for(j = 0; j < Vec1.size(); j++)
	    cout << Vec1.at(j) << " ";
	cout << "\n";
	return 0;
}
