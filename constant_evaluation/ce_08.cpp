constexpr int foo()
{
    int* p = new int(10);

    return *p; // delete yok
}

constexpr int x = foo(); // Error
