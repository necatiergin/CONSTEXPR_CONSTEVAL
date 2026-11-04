consteval int square(int x)
{
    return x * x;
}

consteval int calculate(int x)
{
    return square(x) + square(x + 1);
}

constexpr int result = calculate(5);
