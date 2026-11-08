#include <iostream>


constexpr int foo(int x)
{
    static int counter = 0; // Error (C++17, C++20)
    return x + ++counter;
}

int main()
{
    //constexpr int a = foo(5); //error
    int b = foo(5); 

    std::cout << "b = " << b << '\n';
    int c = foo(5); 
    std::cout << "c = " << c << '\n';
}
