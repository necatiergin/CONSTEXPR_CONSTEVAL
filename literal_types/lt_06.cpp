struct Point {
    int x;
    int y;
};

struct Point {
    int x;
    int y;
};

struct Rectangle {
    Point top_left;
    Point bottom_right;
};

constexpr Rectangle r{
    {0, 0},
    {100, 200}
};

static_assert(r.bottom_right.x == 100);
