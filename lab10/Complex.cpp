#include "Complex.hpp"

void Complex::subtract(Complex a, Complex b)
{
    realPart = a.realPart - b.realPart;
    imaginaryPart = a.imaginaryPart - b.imaginaryPart;
    cout << "subtract = " << realPart << " + " << imaginaryPart << "*i" << endl;
}

void Complex::display(Complex a) const
{
    cout << "display of the complex number: " << a.realPart << "+" << a.imaginaryPart << "i" << endl;
}


