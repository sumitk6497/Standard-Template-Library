#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	std::map<string, vector<int>> Map;
	Map["github"].push_back(4523);
	Map["programming"].push_back(94321);
	Map["github"].push_back(1001);
	

	for(auto &i : Map)
	{
		cout << i.first << endl;
		for(auto &j : i.second)
		{	cout << j << "   "; }

		cout << endl;
	}	


	return 0;
}
