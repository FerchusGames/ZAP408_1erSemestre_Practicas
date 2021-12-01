// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link MathLibrary.lib
// Reg�leme un 10 por mi cumplea�os, porfis

#include <iostream>
#include "MathLibrary.h"

int main()
{
    double a = 15.12;
    int b = 2003;

    std::cout << "a + b = " <<
        MathLibrary::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a - b = " <<
        MathLibrary::Arithmetic::Subtract(a, b) << std::endl;
    std::cout << "a * b = " <<
        MathLibrary::Arithmetic::Multiply(a, b) << std::endl;
    std::cout << "a / b = " <<
        MathLibrary::Arithmetic::Divide(a, b) << std::endl;

    return 0;
}