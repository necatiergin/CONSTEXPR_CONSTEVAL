consteval int f(int x)
{
    return x + 1;
}

consteval int g(int x)
{
    return f(x); // Immediate function context
}

int main()
{
    int ival = 10;

    int a = f(10); // OK
    int b = g(10); // OK

    int c = f(ival);  // Error
    int d = g(ival);  // Error
}
