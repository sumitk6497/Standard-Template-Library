#include <cstring>
#include <iostream>

using namespace std;

int main()
{
	char str[] = "github";
	char str1[10];

	memset(str, 'a', sizeof(str));			//aaaaaaa
	cout << str << endl;

	memset(str1, 'o', sizeof(str1));		//oooooooooo
	cout << str1 << endl;

	return 0;
}

