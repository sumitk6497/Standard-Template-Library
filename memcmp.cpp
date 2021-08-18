// CPP program to illustrate std::memcmp()
#include <iostream>
#include <cstring>

int main()
{
	char buff1[] = "Welcome to GeeksforGeeks";
	char buff2[] = "Hello Geeks ";

	int a;

	a = std::memcmp(buff1, buff2, sizeof(buff1));

	if (a > 0)
		std::cout << buff1 << " - is greater than - " << buff2 << std::endl;
	else if (a < 0)
		std::cout << buff1 << " - is less than - " << buff2 << std::endl;
	else
		std::cout << buff1 << " - is the same as - " << buff2 << std::endl;

	return 0;
}

