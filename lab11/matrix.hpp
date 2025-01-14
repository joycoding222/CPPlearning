#include <iostream>

using namespace std;

class Matrix
{
public:
    int num;
    float *data;

public:
    Matrix(int row, int column)
    {
        cout << "Construct:Matrix(int, int)" << endl;
        this->num = row * column;
        this->data = new float[num]{}; // c++11{}, initialize to 0
    };
    Matrix(Matrix &mat) // copy constructor
    {
        cout << "Copy constructor:Matrix(Matrix & mat)" << endl;
        this->num = mat.num;
        this->data = new float[mat.num]{};
        for (int i = 0; i < num; i++)
        {
            this->data[i] = mat.data[i];
        }
    }
    ~Matrix()
    {
        delete[] this->data;
        cout << "Destructor:~Matrix()" << endl;
    };

    // 重载[]
    float &operator[](int i) { return data[i]; }

    // 重载+
    Matrix operator+(Matrix &mat) const
    {
        if (this->num != mat.num)
            cerr << "Invalid Matrix Operation" << endl;
        Matrix temp(3, 4);
        for (int i = 0; i < num; i++)
        {
            temp.data[i] = this->data[i] + mat.data[i];
        }
        return temp;
    }

    // 重载=
    Matrix &operator=(Matrix &mat)
    {
        this->num = mat.num;
        for (int i = 0; i < num; i++)
        {
            this->data[i] = mat.data[i];
        }
        return *this;
    }

    // 重载<<
    friend std::ostream &operator<<(std::ostream &os, const Matrix &mat)
    {
        int numberPerline = 4;
        for (int i = 0; i < mat.num; i++)
        {
            os << mat.data[i] << " ";
            if (i % numberPerline == 3)
            {
                cout << endl;
            }
        }
        return os;
    }
};
