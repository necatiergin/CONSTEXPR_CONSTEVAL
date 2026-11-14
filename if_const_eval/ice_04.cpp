int foo()
{
    if consteval {   //valid but not meaningful
        return 10;
    }
    else {
        return 20;
    }
}
