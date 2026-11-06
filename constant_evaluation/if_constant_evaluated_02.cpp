
#include <cstddef>
#include <cstring>
#include <type_traits>

constexpr void copy_bytes(unsigned char* dest,
                          const unsigned char* src,
                          std::size_t count)
{
    if (std::is_constant_evaluated()) {
        for (std::size_t i = 0; i < count; ++i)
            dest[i] = src[i];
    }
    else {
        std::memcpy(dest, src, count);
    }
}

constexpr bool test()
{
    unsigned char src[] = {10, 20, 30, 40};
    unsigned char dest[4]{};

    copy_bytes(dest, src, 4);

    return dest[0] == 10 &&
           dest[1] == 20 &&
           dest[2] == 30 &&
           dest[3] == 40;
}

static_assert(test());
