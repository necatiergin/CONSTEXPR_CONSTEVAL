//constinit variable

constinit int g = 20; // valid

int main()
{
	//constinit int x = 5; // invalid
	constinit static int y = 5; // valid
	static constinit int z = 6; // valid
	int static constinit t = 7; // valid
}
