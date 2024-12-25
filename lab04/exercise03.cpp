#include <iostream>
using namespace std;
// enum的定义
enum Day {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
enum Weather {Sunny, Rainy, Cloudy};
// struct的定义
struct DayInfo
{
    enum Day day;
    enum Weather weather;
};

bool canTravel(DayInfo certainDay){
    if ((certainDay.day == Sunday || Saturday) && (certainDay.weather == Sunny))
        return true;
    else
        return false;
}
int main(){
    // 两种初始化方式
    // struct DayInfo test = {.day=Sunday, .weather=Rainy};
    struct DayInfo test;
    test.day = Sunday;
    test.weather = Sunny;
    cout << canTravel(test) << endl;
    return 0;
}