#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main()
{
	std::pair <int, char> Pair;
	std::pair <int, char> Pair1(2, 'b');
	std::pair <int, char> Pair2 = {3, 'c'};
	std::pair <int, char> Pair3(Pair2);
	std::pair <string, int> Pair4;

	Pair.first = 1;
	Pair.second = 'a';

	Pair4 = make_pair("github", 64);

	cout << Pair.first << "   " << Pair.second << endl;
	cout << Pair1.first << "   " << Pair1.second << endl;
	cout << Pair2.first << "   " << Pair2.second << endl;
	cout << Pair3.first << "   " << Pair3.second << endl;
	cout << Pair4.first << "   " << Pair4.second << endl;

	return 0;
}	
