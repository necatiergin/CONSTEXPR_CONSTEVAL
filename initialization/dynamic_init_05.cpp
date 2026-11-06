// ordered dynamic init.

#include <iostream>

int foo()
{
    std::cout << "foo\n";
    return 10;
}

int bar()
{
    std::cout << "bar\n";
    return 20;
}

int x = foo();
int y = bar();

int main()
{
    std::cout << "main\n";
}
