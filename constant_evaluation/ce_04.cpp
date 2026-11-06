constexpr int foo()
{
    int* p = new int(10);
    delete p;

    return *p;
}

int main()
{
    constexpr auto val = foo();   //error
}
