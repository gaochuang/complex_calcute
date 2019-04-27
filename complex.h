#ifndef __COMPLEX__H__
#define __COMPLEX__H__

class Complex
{
private:
   
   double a;
   double b;
public:
   Complex(double a,double b);
   double getaA();
   double getB();
   double getModulus();
   Complex operator + (const Complex& c);
   Complex operator - (const Complex& c);
   Complex operator * (const Complex& c);
   Complex operator / (const Complex& c);
   bool operator ==  (const Complex& c);
   bool operator != (const Complex& c);
   Complex& operator = (const Complex& x);
};

#endif 