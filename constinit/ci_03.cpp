constinit int x = 10; // valid

thread_local constinit int y = 20; // valid

void foo()
{
    static constinit int z = 30; // valid

    constinit int k = 40; // error
}
