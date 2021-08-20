#include <iostream>
#include <vector>
using namespace std;

int main()
{
	std::vector<int> Vec;				//declaration
	Vec.resize(256);				//size = 256

	for(int i = 1; i <= 255; i++)
	{
	    Vec.push_back(i);
	}						//size = 256 + 255 = 511

	for(int i = 1; i < 100; i++)
	{
	    Vec.push_back(i + 500);
	}						//size = 511 + 99 = 610
	
	cout << "Size = " << Vec.size() << endl;	//size = 610

	return 0;
}
