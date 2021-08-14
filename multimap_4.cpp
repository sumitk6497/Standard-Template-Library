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

	cout << "Size of this multimap : " << Multimap.size() << endl;
	cout << "Maximum Size of this multimap : " << Multimap.max_size() << endl;
	return 0;
}
