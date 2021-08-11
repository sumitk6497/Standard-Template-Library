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

	//get all pairs of given key
	auto range = Multimap.equal_range('a');
	for(auto j = range.first; j != range.second; j++)
	{
		cout << j->first << "  " << j->second << endl;
	}

	return 0;
}
