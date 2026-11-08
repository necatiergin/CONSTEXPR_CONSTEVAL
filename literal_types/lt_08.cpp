struct Data {
    int value;

    void print() const {}
};

constexpr int Data::* p = &Data::value;

constexpr void (Data::*pf)() const = &Data::print;
