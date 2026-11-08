struct X {
    ~X() {}
};

// error, X is not a literal type
constexpr X foo(X x)
{
    return x;
}
