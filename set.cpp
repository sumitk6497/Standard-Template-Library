#include <iostream>
#include <set>

using namespace std;

int main()
{
	std::set <int> Set = {1,3,2,4,5,1,3,4,5,2,6};			//default : assending order
	std::set <int,std::greater<>> Set1 = {1,3,2,4,5,14,5,2,6};	//desending order
	std::set <float,std::less<>> Set2 = {1.5,2.9,0.5,7.7};		//assending order

	for(const auto &e : Set)
		cout << e << "  ";					//1 2 3 4 5 6

	cout << endl;

	for(const auto &e : Set1)
		cout << e << "  ";					//14 6 5 4 3 2 1

	cout << endl;

	for(const auto &e : Set2)
		cout << e << "  ";					//0.5  1.5  2.9  7.7

	cout << endl;

	return 0;
}
