constexpr int foo(int x)
{
    if (x < 0)
        goto negative;

    return x;

negative:
    return -x;
}

int main()
{
    constexpr int x = foo(12);  //valid - C++23
    constexpr int y = foo(-5);  //invalid - C++23
}
