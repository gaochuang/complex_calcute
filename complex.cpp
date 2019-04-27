#include"complex.h"
#include<math.h>

Complex::Complex(double a,double b)
{
    this->a =a;
    this->b=b;
}

double Complex::getaA()
{
    return a;
}

double Complex::getB()
{
    return b;
}

double Complex::getModulus()
{
    return sqrt(a*a + b*b);
}
