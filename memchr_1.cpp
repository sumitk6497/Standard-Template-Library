#include <iostream>
#include <cstring>

int main()
{
	char arr[] = { 'b', 'a', 'd', 'e', 'f', 'A', 'g' };
	char ch;

	std::cout << "Enter a character : ";
	std::cin >> ch;

	char* pc = (char*)std::memchr(arr, ch, sizeof(arr));

	if (pc != NULL)
		std::cout << "search character found" << std::endl;
	else
		std::cout << "search character not found" << std::endl;

	return 0;
}

