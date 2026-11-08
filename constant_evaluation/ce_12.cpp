//reading a volatile value

volatile int x = 10;

constexpr int foo()
{
    return x;
}

constexpr int a = foo(); // Error
