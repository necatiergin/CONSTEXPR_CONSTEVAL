struct Port {
    unsigned value;

    consteval Port(unsigned n) : value{ n }
    {
        if (n == 0 || n > 65535)
            throw "invalid port";
    }
};

int main()
{
    constexpr Port p1{ 8080 }; // OK
    Port p2{ 8080 }; // OK
    p2.value = 9000; // OK
}
