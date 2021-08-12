#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	std::unordered_multimap<char, int> umm = {{'e',5}};
	umm.insert({'a', 1});
	umm.insert(std::pair<char,int>('a', 1));
	umm.insert(make_pair('a', 3));
	umm.insert(make_pair('b', 4));
	umm.insert(make_pair('b', 4));

	//All key-pair elements
	for(auto &i : umm)
	{
		cout << i.first << "   " << i.second << endl;
	}	

	return 0;
}
