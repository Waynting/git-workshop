#include <iostream>

int multiply(int a, int b)
{
    if (a * b < 0)
    {
        return 0;
    }
    return a * b;
}

int multiply(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    std::cout << "Hello 超級貓貓人!" << std::endl;
    std::cout << "5 * 6 = " << multiply(5, 6) << std::endl;
    std::cout << "5 * 6 * 7 = " << multiply(5, 6, 7) << std::endl;
    std::cout << "5 * -6 = " << multiply(5, -6) << std::endl;
    return 0;
}