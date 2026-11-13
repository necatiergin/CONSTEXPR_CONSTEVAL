int foo()
{
    return 42;
}

int x = foo(); // dynamic initialization
constinit int y = foo(); // error 
