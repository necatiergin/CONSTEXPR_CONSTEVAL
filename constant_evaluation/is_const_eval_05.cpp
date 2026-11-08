#include <type_traits>
#include <iostream>

int y = 0;
const int a = std::is_constant_evaluated() ? y : 1;

int main()
{
	std::cout << "a = " << a << '\n';
	constexpr int b = a; //error
}
