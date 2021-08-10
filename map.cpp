#include <iostream>
#include <map>

using namespace std;

int main()
{
	cout << "Assending order map ::::" << endl;
	std::map<string, int> Map;
	Map["github"] = 4523;
	Map["programming"] = 94321;
	Map.insert(std::make_pair("C_language", 3674));

	for(auto &i : Map)
	{
		cout << i.first << "   " << i.second << endl;
	}	

	cout << "\nDescending order ::::" << endl;

	std::map<string, int, std::greater<>> Map1;
	Map1["github"] = 4523;
	Map1["programming"] = 94321;
	Map1.insert(std::make_pair("C_language", 3674));

	for(auto &i : Map1)
	{
		cout << i.first << "   " << i.second << endl;
	}

	return 0;
}
