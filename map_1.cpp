#include <iostream>
#include <map>

using namespace std;

int main()
{
	std::map<string, int> Map;
	Map["github"] = 4523;
	Map["programming"] = 94321;
	Map.insert(std::make_pair("C_language", 3674));

	for(auto &i : Map)
	{
		cout << i.first << "   " << i.second << endl;
	}	


	Map["github"] = 10000;
	cout << Map["github"] << endl;				//10000

	return 0;
}
