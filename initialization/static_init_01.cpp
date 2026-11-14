// constant initialization

/* 
- Constant initialization: Bir değişkenin initialization işleminin niteliğidir.
- Constant expression: Bir ifadenin standart kurallarına göre sahip olduğu niteliktir.
- Constant evaluation: Bir ifadenin değerlendirilmesiyle ilgili bir süreçtir.
*/

constexpr int square(int x)
{
    return x * x;
}

int a = 100; //constant initialization
int b = square(12); // constant initialization
