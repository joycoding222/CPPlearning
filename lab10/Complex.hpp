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
        cout << "Construct:Complex()" << endl;
    }
    Complex(int realPart, int imaginaryPart)
    {
        this->realPart = realPart;
        this->imaginaryPart = imaginaryPart;
    }
    ~Complex() {};
    // lab 09的函数
    void add(Complex a, Complex b)
    {
        realPart = a.realPart + b.realPart;
        imaginaryPart = a.imaginaryPart + b.imaginaryPart;
        cout << "sum = " << realPart << " + " << imaginaryPart << "*i " << endl;
    }
    void subtract(Complex a, Complex b);
    void display(Complex a) const;

    // << 的重载
    // 为什么采用友元函数：避免去cout 类的内部进行重载
    friend std::ostream &operator<<(std::ostream &os, Complex a)
    {
        if (a.imaginaryPart > 0)
        {
            os << a.realPart << "+" << abs(a.imaginaryPart) << "i";
        }
        else if (a.imaginaryPart < 0)
        {
            os << a.realPart << "-" << abs(a.imaginaryPart) << "i";
        }
        else
            os << a.realPart;
        return os;
    }
    // ~ 的重载
    // ~ 运算符的两种重载，第一种使用了friend 函数；第二种是普通的运算符重载(默认有一个参数)
    //
    // friend Complex operator~(Complex a)
    // {
    //     a.realPart = a.realPart;
    //     a.imaginaryPart = -a.imaginaryPart;
    //     return a;
    // }
    Complex operator~()
    {
        this->imaginaryPart = -(this->imaginaryPart);
        return *this;
    }

    // + 的重载
    // friend Complex operator+(Complex &a, Complex &b)
    // {
    //     Complex sum = {0, 0};
    //     sum.realPart = a.realPart + b.realPart;
    //     sum.imaginaryPart = a.imaginaryPart + b.imaginaryPart;
    //     return sum;
    // }
    Complex operator+(Complex &a) const
    {
        Complex sum = {0, 0};
        sum.realPart = this->realPart + a.realPart;
        sum.imaginaryPart = this->imaginaryPart + a.imaginaryPart;
        return sum;
    }

    // - 的重载
    // friend Complex operator-(Complex &a, Complex &b)
    // {
    //     Complex subtract = {0, 0};
    //     subtract.realPart = a.realPart - b.realPart;
    //     subtract.imaginaryPart = a.imaginaryPart - b.imaginaryPart;
    //     return subtract;
    // }
    Complex operator-(Complex &a) const
    {
        Complex subtract = {0, 0};
        subtract.realPart = this->realPart - a.realPart;
        subtract.imaginaryPart = this->imaginaryPart - a.imaginaryPart;
        return subtract;
    }

    // - 的重载
    // friend Complex operator-(Complex &a, int b)
    // {
    //     Complex c = {0, 0};
    //     c.realPart = a.realPart - b;
    //     c.imaginaryPart = a.imaginaryPart;
    //     return c;
    // }
    Complex operator-(int b) const
    {
        Complex c = {0, 0};
        c.realPart = this->realPart - b;
        c.imaginaryPart = this->imaginaryPart;
        return c;
    }

    // * 的重载
    // friend Complex operator*(Complex &a, Complex &b)
    // {
    //     Complex c = {0, 0};
    //     c.realPart = a.realPart * b.realPart - a.imaginaryPart * b.imaginaryPart;
    //     c.imaginaryPart = a.realPart * b.imaginaryPart + a.imaginaryPart * b.realPart;
    //     return c;
    // }
    Complex operator*(Complex &a)
    {
        Complex c = {0, 0};
        c.realPart = this->realPart * a.realPart - this->imaginaryPart * a.imaginaryPart;
        c.imaginaryPart = this->realPart * a.imaginaryPart + this->imaginaryPart * a.realPart;
        return c;
    }

    // 这里是 2*a 第一个参数不是对象，没有成员函数，因此需要采用友元函数；如果 a*2 则可以直接对运算符*进行重载
    friend Complex operator*(int a, Complex &b)
    {
        Complex c = {0, 0};
        c.realPart = b.realPart * a;
        c.imaginaryPart = b.imaginaryPart * a;
        return c;
    }

    // == 的重载
    bool operator==(Complex &a)
    {
        bool flag;
        if ((a.realPart == this->realPart) & (a.imaginaryPart == this->imaginaryPart))
            flag = true;
        else
            flag = false;
        return flag;
    }

    // ！= 的重载
    bool operator!=(Complex &a)
    {
        bool flag;
        if ((a.realPart == this->realPart) & (a.imaginaryPart == this->imaginaryPart))
            flag = false;
        else
            flag = true;
        return flag;
    }

    // >> 的重载
    friend std::istream &operator>>(std::istream &is, Complex &a)
    {
        is >> a.realPart >> a.imaginaryPart;
        return is;
    }
};