#include <type_traits>
#include <iostream>

int y = 0;
const int a = std::is_constant_evaluated() ? 2 : y;

int main()
{
	std::cout << "a = " << a << '\n'; //a == 2
	constexpr int b = a; 
}
