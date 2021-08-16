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
	std::vector<int> vec1{1,2,3,4,5};
	std::vector<int> vec2;
	std::vector<int> vec3;	
	vec3 = vec1;
	std::vector<int> vec4(vec1);
	std::vector<int> vec5;	
	std::vector<int> vec6;	

	for(int i = 0; i<vec1.size(); i++)
		vec2.push_back(vec1[i]);

	copy(vec1.begin(), vec1.end(), back_inserter(vec5));

	vec6.assign(vec1.begin(), vec1.end());


	cout << "vec 1  : ";
	display(vec1);

	cout << "vec 2  : ";
	display(vec2);
	cout << "vec 3  : ";
	display(vec3);
	cout << "vec 4  : ";
	display(vec4);
	cout << "vec 5  : ";
	display(vec5);
	cout << "vec 6  : ";
	display(vec6);


	return 0;
}
