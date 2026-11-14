constexpr int foo(int x)
{
    if consteval {
        return x * 2;
    }
    else 
        return x * 3; //error
}

