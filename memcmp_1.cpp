#include <cstring>
#include <iostream>

int main()
{
	char buff1[] = "GEEKSFORGEEKS";

	int comp = memcmp(buff1, "geeksforgeeks", 6);
	if (comp == 0) {
		std::cout << "both are equal" << std::endl;
	}
	else if (comp < 0) {
		std::cout << "String 1 is less than String 2" << std::endl;
	} 
	else {
		std::cout << "String 1 is greater than String 2" << std::endl;
	}

	return 0;
}

