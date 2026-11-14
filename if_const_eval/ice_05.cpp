consteval int twice(int x)
{
    return x * 2;
}

constexpr int foo(int x)
{
    if consteval {
        return twice(x);
    }
    else {
        return x * 3;
    }
}

int main()
{
    constexpr int a = foo(10);  // 20

    int x = 10;
    int b = foo(x);             // 30
}
