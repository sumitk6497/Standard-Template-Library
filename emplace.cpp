#include <iostream>
#include <set>
using namespace std;

class A {
    public:
        int x;
	A(int x=0) : x{x}
	{ cout << "Construct" << endl; };

	A(const A& rhs)
	{ x = rhs.x;
	cout << "Copy" << endl; };

};

bool operator < (const A& lhs, const A& rhs) { return lhs.x < rhs.x; }

int main()
{
	set <A> Set;
	A a(10);
	Set.insert(a);		//or set.insert(A(10));		//Construct and Copy called
	
	for(auto &i : Set)
	    cout << i.x << endl;	//print 10

	Set.emplace(20);		//Construct called only
	for(auto &i : Set)
	    cout << i.x << endl;	//print 10 and 20 bcz Set have two values
	return 0;
}
