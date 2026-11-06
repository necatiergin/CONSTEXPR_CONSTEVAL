#include <iostream>

int get_value()
{
    std::cout << "get_value\n";
    return 42;
}

void foo()
{
    static int x = get_value();
}

int main()
{
    std::cout << "main\n";
    foo();
    foo();
}
