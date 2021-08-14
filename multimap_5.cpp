#include <iostream>
#include <map>

using namespace std;

int main()
{
	std::multimap<char, int> Multimap;
	Multimap.insert(make_pair('a', 1));
	Multimap.insert(make_pair('c', 2));
	Multimap.insert(make_pair('a', 3));
	Multimap.insert(make_pair('b', 4));
	Multimap.insert(make_pair('d', 5));

	//All key-pair elements
	for(auto &i : Multimap)
	{
		cout << i.first << "   " << i.second << endl;
	}	

	cout << endl;

	auto ite = Multimap.crbegin();
	cout << "Last element is : " << ite->first << "  " << ite->second << endl;

	cout << endl;
	for(auto ite = Multimap.crbegin(); ite != Multimap.crend(); ite++)
	{
		cout << ite->first << "  " << ite->second << endl;
	}

	return 0;
}
