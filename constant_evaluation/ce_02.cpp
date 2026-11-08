constexpr int foo()
{
    int* p = new int(42);

    int result = *p;

    delete p;

    return result;
}

constexpr int x = foo(); // OK
