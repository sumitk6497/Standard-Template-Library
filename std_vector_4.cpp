#include <iostream>
#include <vector>
using namespace std;

void display(std::vector <int> const &vec)
{
	for(auto i : vec)
	    cout << i << " ";
	cout << endl;

}

int main()
{
	std::vector<int> vec1 = {1,2,3,4,5};
	std::vector<int> vec2{4,5,6,7,8,9};
	std::vector<int> vec3 = {1,2,3,4,5,6,7,8,9};

	std::vector<int>::iterator it, it1, it2;

	cout << "vec 1  : ";
	display(vec1);
	cout << "vec 2  : ";
	display(vec2);
	cout << "vec 3  : ";
	display(vec3);

	vec1.clear();

	cout << "vec 1 after clear  : ";
	display(vec1);

	it = vec2.begin();
	vec2.erase(it);
	cout << "vec 2 after earse  : ";
	display(vec2);


	it1 = vec3.begin();
	it2 = vec3.end();
	it2 = it2 - 2;
	vec3.erase(it1, it2);
	cout << "vec 3  : ";
	display(vec3);


	return 0;
}
