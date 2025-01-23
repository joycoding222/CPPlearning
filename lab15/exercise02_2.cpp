/*
Because i could not finish this exercise correctly, the code below is from AI
*/
#include <iostream>
#include <stdexcept>
#include <typeinfo>
 
class Base
{
protected:
    int bvalue;
 
public:
    Base(int i) : bvalue(i) {}
 
    virtual bool equal(const Base &b) const {
        const Base* other_base = dynamic_cast<const Base*>(&b);
        if (other_base) {
            return bvalue == other_base->bvalue;
        }
        return false; // This line should theoretically not be reached due to type checking in process function
    }
 
    friend bool operator==(const Base &lhs, const Base &rhs);
};
 
class Derived : public Base
{
private:
    int dvalue;
 
public:
    Derived(int a, int b) : Base(a), dvalue(b) {}
 
    bool equal(const Base &b) const override {
        const Derived* other_derived = dynamic_cast<const Derived*>(&b);
        if (other_derived) {
           std::cout << 1 << std::endl; // 补充：检查是否调用了这个 equal 函数
            return Base::equal(b) && dvalue == other_derived->dvalue;
        }
        return false; // This line should theoretically not be reached due to type checking in process function
    }
};
 
bool operator==(const Base &lhs, const Base &rhs) {
    const std::type_info &lhs_type = typeid(lhs);
    const std::type_info &rhs_type = typeid(rhs);
 
    if (lhs_type != rhs_type) {
        throw std::runtime_error("The two objects have different types, they can not be compared.");
    }
 
    const Base* lhs_base = dynamic_cast<const Base*>(&lhs);
    const Base* rhs_base = dynamic_cast<const Base*>(&rhs);
 
    if (lhs_base && rhs_base) {
        return lhs_base->equal(*rhs_base);
    }
 
    return false; // This line should theoretically not be reached due to type checking
}
 
void process(const Base &obj1, const Base &obj2) {
    try {
        if (obj1 == obj2) {
            std::cout << "The two objects are equal." << std::endl;
        } else {
            std::cout << "The two objects are not equal." << std::endl;
        }
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}
 
int main(int argc, char* argv[])
{
    Base b1(2);
    Base b2(2);
 
    Derived d1(1, 2);
    Derived d2(2, 2);
 
    process(b1, b2); // Should print "The two objects are equal."
    process(d1, d2); // Should print "The two objects are not equal."
    process(b1, d1); // Should throw and catch an exception
 
    return 0;
}