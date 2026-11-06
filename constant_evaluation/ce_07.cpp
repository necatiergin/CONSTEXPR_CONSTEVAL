constexpr int foo(int x)
{
    int* p = new int(x);

    int result = *p;

    delete p;

    return result;
}

constexpr int a = foo(42); // OK
