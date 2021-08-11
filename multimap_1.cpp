#include <iostream>
#include <map>

using namespace std;

int main()
{
	std::multimap<char, int> Multimap;
	Multimap.insert(make_pair('a', 1));
	Multimap.insert(make_pair('a', 2));
	Multimap.insert(make_pair('a', 3));
	Multimap.insert(make_pair('b', 4));
	Multimap.insert(make_pair('b', 5));

	//All key-pair elements
	for(auto &i : Multimap)
	{
		cout << i.first << "   " << i.second << endl;
	}	

	cout << endl;
	auto pair = Multimap.find('a');

	cout << pair->first << "  " << pair->second << endl;

	cout << "Lower bound of a" << endl;
	auto lower = Multimap.lower_bound('a');

	cout << lower->first << "  " << lower->second << endl;

	cout << "Upper bound of a" << endl;
	auto upper = Multimap.upper_bound('a');

	cout << upper->first << "  " << upper->second << endl;
	return 0;
}
