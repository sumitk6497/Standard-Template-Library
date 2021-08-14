#include <iostream>
#include <set>
#include <functional>
#include <string>

using namespace std;

class Person {
    public :
	int age;
	string name;

	bool operator < (const Person& rhs) const 
	{ return age < rhs.age; }

	bool operator > (const Person& rhs) const 
	{ return age > rhs.age; }
};


int main()
{
	std::set <Person> Set = {{25, "sumit"}, {30, "amit"}, {22, "nimesh"}};			//default : assending order (( < called ))
	std::set <Person,std::greater<>> Set1 = {{25, "sumit"},{30, "amit"}, {22, "nimesh"}};	//desending order
	std::set <Person,std::less<>> Set2 = {{25, "sumit"}, {30, "amit"}, {22, "nimesh"}};			//assending order

	for(const auto &e : Set)
		cout << e.age << "  " << e.name << endl;

	cout << endl;

	for(const auto &e : Set1)
		cout << e.age << "  " << e.name << endl;

	cout << endl;

	for(const auto &e : Set2)
		cout << e.age << "  " << e.name << endl;

	cout << endl;


	return 0;
}
