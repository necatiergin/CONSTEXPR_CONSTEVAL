struct Value {
    int mdata;

    consteval operator int() const
    {
        return mdata;
    }
};

constexpr Value val{ 42 };
constexpr int x = val;
