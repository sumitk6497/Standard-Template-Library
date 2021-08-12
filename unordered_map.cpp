#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	std::unordered_map<int, char> unm = {{1,'a'},{2,'b'}};
	unm.insert({3,'d'});

	cout << "1 : " <<unm[1] << endl;

	unm[1] = 'z';

	for(auto &i : unm)
	{
		cout << i.first << "   " << i.second << endl;
	}	

	auto result = unm.find(2);
	if(result != unm.end())
		cout << "Found : " << result->first << "  " << result->second << endl;
	else 
		cout << "Not found" << endl;

	return 0;
}
