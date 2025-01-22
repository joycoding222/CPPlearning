#include <iostream>
#include <string>
using namespace std;

class MyException : public exception
{
public:
    MyException(const string &msg) : m_msg(msg)
    {
        cout << "MyException::MyException-set m_msgto:" << m_msg << endl;
    }
    ~MyException()
    {
        cout << "MyException::~MyException" << endl;
    }
    virtual const char *what() const throw() // throw() 相当于 noexcept，不抛出异常
    {
        cout << "MyException::what" << endl;
        return m_msg.c_str();
    }
    const string m_msg;
};
void throwDerivedException()
{
    cout << "throwDerivedException-thrown a derived exception" << endl;
    string execptionMessage("MyExceptionthrown"); // 将 exceptionMessage 初始化为 MyExceptionthrown 
    throw(MyException(execptionMessage)); // 抛出异常并调用构造函数 MyException(const string %msg);
}

void illustrateDerivedExceptionCatch()
{
    cout << "illustrateDerivedExceptionsCatch-start" << endl;
    try
    {
        throwDerivedException();
    }
    
    catch (const MyException &e)
    {   // 抛出的异常会先被基类捕获，代码不会到达这里
        cout << "illustrateDerivedExceptionsCatch-caught an MyException, e.what::" << e.what() << endl;
        // some additional code due to the fact thatMyExceptionwas thrown...
    }

    catch (const exception &e)
    {
        cout << "illustrateDerivedExceptionsCatch-caught an std::exception, e.what:" << e.what() << endl;
        // some additional code due to the fact thatstd::exception was thrown...
    }
    cout << "illustrateDerivedExceptionsCatch-end" << endl;
}
int main(int argc, char **argv)
{
    cout << "main -start" << endl;
    illustrateDerivedExceptionCatch();
    cout << "main -end" << endl;
    return 0;
}
