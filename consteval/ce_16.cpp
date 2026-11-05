consteval int foo() 
{
	return 42; 
}

constexpr auto fp = &foo; //error
