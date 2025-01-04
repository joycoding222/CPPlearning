#pragma once
#include <iostream>

using namespace std;

class Complex
{
private:
    int realPart;
    int imaginaryPart;

public:
    Complex()
    {
        realPart = 0;
        imaginaryPart = 0;
        cout << "Default value configuration" << endl;
    }
    Complex(int realPart, int imaginaryPart)
    {
        this->realPart = realPart;
        this->imaginaryPart = imaginaryPart;
    }
    ~Complex() {};

    void add(Complex a, Complex b)
    {
        realPart = a.realPart + b.realPart;
        imaginaryPart = a.imaginaryPart + b.imaginaryPart;
        cout << "sum = " << realPart << " + " << imaginaryPart << "*i " << endl;
    }

    void subtract(Complex a, Complex b);
    void display(Complex a);
};