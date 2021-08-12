#include <iostream>
#include <map>

using namespace std;

int main()
{
	std::multimap<int, int> mp;

	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 2, 60 });
	mp.insert({ 3, 20 });
	mp.insert({ 1, 50 });
	mp.insert({ 4, 50 });
	mp.insert({ 4, 20 });
	mp.insert({ 6, 10 });

	cout << "The elements from position 3 in multimap are : \n";
	cout << "KEY\tELEMENT\n";

	// find() function finds the position at which 3 is
	for (auto itr = mp.find(3); itr != mp.end(); itr++)
		cout << itr->first << '\t' << itr->second << endl;

	return 0;
}

