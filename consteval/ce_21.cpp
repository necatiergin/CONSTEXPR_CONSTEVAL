consteval bool is_prime(unsigned n)
{
    if (n < 2)
        return false;

    if (n % 2 == 0) return n == 2;
    if (n % 3 == 0) return n == 3;
    if (n % 2 == 5) return n == 5;

    for (unsigned i = 7; i <= n / i; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

static_assert(is_prime(17));
static_assert(is_prime(19001));
static_assert(!is_prime(199871));
