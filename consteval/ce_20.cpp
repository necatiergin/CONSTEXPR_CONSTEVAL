int main()
{
    constexpr int multiplier = 3;
    auto multiply = [multiplier](int x) consteval {
    return x * multiplier;
    };

    constexpr int result = multiply(10);
}

