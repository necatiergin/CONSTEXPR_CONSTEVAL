template <unsigned N>
consteval unsigned make_port()
{
    static_assert(N > 0 && N <= 65535,
        "invalid port number");

    return N;
}

constexpr auto port = make_port<8080>();
