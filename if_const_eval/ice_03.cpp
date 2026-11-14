
constexpr void bom(int )
{
    //
}

consteval void bar(int)
{
    //..
}

constexpr void foo(int x)
{
    if !consteval {
        bom(x);
    }

    if consteval {

    }
    else {
        bom(x);
    }

    if consteval {
        bar(x);
    }
    else {
        bom(x);
    }
}

