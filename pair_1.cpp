#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main()
{
	std::pair <int, char> Pair1(2, 'b');
	std::pair <int, char> Pair2 = {3, 'c'};

	cout << "Before swap....." << endl;
	cout << Pair1.first << "   " << Pair1.second << endl;
	cout << Pair2.first << "   " << Pair2.second << endl;

	Pair1.swap(Pair2);

	cout << "After swap....." << endl;
	cout << Pair1.first << "   " << Pair1.second << endl;
	cout << Pair2.first << "   " << Pair2.second << endl;
	return 0;
}	
