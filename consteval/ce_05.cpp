template <int N>
struct Array {};

template <int N>
consteval auto foo()
{
    return Array<N>{};
}

constexpr auto x = foo<10>(); 
