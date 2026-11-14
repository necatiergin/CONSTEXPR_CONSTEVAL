
struct Nec {
	constexpr Nec(int val) : mx(val) {}
	int mx;
};

const int i1 = 42;
constexpr int i2 = i1;
const Nec n1(23);
constexpr Nec n2(n1); //error
