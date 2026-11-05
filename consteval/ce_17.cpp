consteval unsigned make_port(unsigned value)
{
    if (value == 0 || value > 65535)
        throw "invalid port number";

    return value;
}

constexpr auto port1 = make_port(8080);  // valid
constexpr auto port2 = make_port(69000); // Error
