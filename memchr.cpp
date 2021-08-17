#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char sr[] = "This is a github repositories";
	char ch = 'g';
	int count = 13;

	if (memchr(sr, ch, count))
		cout << ch << " is present in first " << count << " characters of \"" << sr << "\"";
	else
		cout << ch << " is not present in first " << count << " characters of \"" << sr << "\"";

	cout << endl;

	return 0;
}

