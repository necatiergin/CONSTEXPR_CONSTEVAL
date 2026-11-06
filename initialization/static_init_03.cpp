#include <cassert>

struct Data {
    Data() {}
    int x;
};

Data obj;

int main()
{
    assert(obj.x == 0);
}
