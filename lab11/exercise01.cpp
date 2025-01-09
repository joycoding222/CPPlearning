#include <iostream>
#include <memory>

using namespace std;
int main()
{
    double *p_reg = new double(5); // 申请一个double 的内存，并初始化为5
    shared_ptr<double> pd;
    pd = shared_ptr<double>(p_reg);
    cout << "*pd = " << *pd << endl;
    cout << pd.use_count() << endl; // 打印指向这块动态内存的指针数

    std::shared_ptr pshared = pd; // 智能指针pshared 来共享这块动态内存（而非管理）
    cout << "*pshared = " << *pshared << endl;
    cout << pshared.use_count() << endl;

    /*
    应该避免使用原始指针来初始化多个shared_ptr实例。
    相反，应该只使用一个shared_ptr来管理这块内存，
    并可以通过复制或赋值操作来创建其他shared_ptr实例来共享这块内存
    */
    // 错误的用两个智能指针对同一块动态内存进行管理
    // shared_ptr<double> pshared(p_reg);
    // cout << "*pshred = " << *pshared << endl;
    // cout << pshared.use_count() << endl;

    string str = ("Hello World");
    cout << str << endl;
    /*
    这段代码报错重复释放内存的原因在于对shared_ptr的误用。
    shared_ptr是设计来管理通过new操作符动态分配的内存的，当shared_ptr的引用计数归零时，它会自动释放所管理的内存。
    然而，在这段代码中，shared_ptr<string> pstr(&str);尝试让一个shared_ptr来管理一个局部自动变量str的内存。
    */
    // str是一个局部变量，当作用域结束时，它的内存会被自动回收，再通过shared_ptr 进行动态内存管理，则会造成内存重复释放
    //  string str("Hello World!");
    //  shared_ptr<string> pstr(&str);
    //  cout << "*pstr = " << *pstr << endl;

    return 0;
}