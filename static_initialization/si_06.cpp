constexpr int foo(int x)
{
    return x * x;
}

int bar()
{
    return 42;
}

// namespace scope
int a = foo(5);  // static init.
int b = bar();   // dynamic init.

int main()
{
    int x = foo(5); // copy init.
    int y = bar();  // copy init.
}
