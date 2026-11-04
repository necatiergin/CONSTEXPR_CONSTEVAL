consteval int foo(int x)
{
    return x + 1;
}

int main()
{
    const int a = 10;
    int x = foo(a); // valid

    int b = 20;
    const int c = b;

    int y = foo(c); // invalid
}
