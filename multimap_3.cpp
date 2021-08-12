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

	//function to erase given key
	Multimap.erase('a');


	for(auto &i : Multimap)
	{
		cout << i.first << "   " << i.second << endl;
	}	
	return 0;
}
