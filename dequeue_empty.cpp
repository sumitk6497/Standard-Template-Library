#include <deque>
#include <iostream>
using namespace std;

int main()
{
	deque<int> mydeque;
	mydeque.push_front(1);

	if (mydeque.empty()) {
		cout << "Dequeue is empty" << endl;
	}
	else {
		cout << "Dequeue is not empty" << endl;
	}

	mydeque.pop_front();
	cout << "after pop" << endl;

	if (mydeque.empty()) {
		cout << "Dequeue is empty" << endl;
	}
	else {
		cout << "Dequeue is not empty" << endl;
	}

	return 0;
}

