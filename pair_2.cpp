#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main()
{
	std::pair <int, char> Pair1(2, 'b');
	std::pair <int, char> Pair2 = {3, 'c'};
	std::pair <int, char> Pair3 = {4, 'c'};
	std::pair <int, char> Pair4;

	Pair4 = Pair3;						//assigns new object for a pair object

	cout << Pair1.first << "   " << Pair1.second << endl;
	cout << Pair2.first << "   " << Pair2.second << endl;
	cout << Pair3.first << "   " << Pair3.second << endl;
	cout << Pair4.first << "   " << Pair4.second << endl;

	if(Pair1 == Pair2)					//comparison operator ==, !=
		cout << "Same" << endl;
	else
		cout << "Not same" << endl;

	if(Pair1 >= Pair4)					//logical operator >=, <=, >, <
		cout << "Pair1" << endl;
	else
		cout << "Pair4" << endl;

	return 0;
}	
