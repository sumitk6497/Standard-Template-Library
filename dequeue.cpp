#include <iostream>
#include <deque>

using namespace std;

void showdq(deque <int> dq)
{
	deque <int>::iterator it;
	
	for (it = dq.begin(); it != dq.end(); ++it)
		cout << '\t' << *it;

	cout << '\n';
}

int main()
{
	deque <int> dq;
	dq.push_back(10);
	dq.push_front(20);
	dq.push_back(30);
	dq.push_front(15);
	
	cout << "The deque dq is : ";
	showdq(dq);						//15 20 10 30

	cout << "\ndq.size() : " << dq.size() << endl;		//4
	cout << "dq.max_size() : " << dq.max_size() << endl;	//

	cout << "dq.at(2) : " << dq.at(2) << endl;		//10
	cout << "dq.front() : " << dq.front() << endl;		//15
	cout << "dq.back() : " << dq.back() << endl;		//30

	cout << "dq.pop_front() : ";
	dq.pop_front();
	showdq(dq);						//20 10 30

	cout << "dq.pop_back() : ";
	dq.pop_back();
	showdq(dq);						//20 10

	return 0;
}

