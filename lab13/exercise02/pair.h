#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class Pair
{
public:
    T1 key;
    T2 value;
    Pair(T1 k, T2 v) : key(k), value(v) {};
    bool operator<(const Pair<T1, T2> &p) const;
    friend std::ostream & operator<<(std::ostream & os, const Pair<T1, T2> &p)
    {
        os << p.key << " " << p.value << endl;
        return os;
    }
};
// 注意 Pair<T1, T2> 是类名，而 Pair 不是类名
template <class T1, class T2>
bool Pair<T1, T2>::operator<(const Pair<T1, T2> &p) const
{
    if (this->key < p.key)
        return true;
    else 
        return false;
}