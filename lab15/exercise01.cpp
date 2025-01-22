#include <iostream>
using namespace std;

class Car
{
private:
    enum
    {
        Off, // Off : non automatically drive
        On   // On : automatically drive
    };
    enum
    {
        Minvel,
        Maxvel = 200
    }; // range of velocity from 0 to 200
    int mode; // mode of car, Off ro On
    int velocity;

public:
    friend class Driver;
    Car(int m = On, int v = 50) : mode(m), velocity(v) {}
    bool velup(int v);
    bool veldown(int v);
    bool ison() const;     // check weather the mode is on
    int getvel() const;    // get the velocity
    void showinfo() const; // show the mode and velocity of car
    std::string getmode() const; // I add this member function to get the mode of car
};

class Driver
{
public:
    bool velup(Car &car, int v);
    bool veldown(Car &car, int v);
    void setmode(Car &car);    // if the mode is on, set it to Off
    bool ison(Car &car) const; // check if the mode is on
};

bool Car::velup(int v)
{
    this->velocity += v;
    cout << "Increase velocity by car, its mode is " << this->getmode()
         << ", velocity is " << this->velocity << endl;

    return true;
}
bool Car::veldown(int v)
{
    this->velocity -= v;
    cout << "Decrease velocity by car, its mode is " << this->getmode()
         << ", velocity is " << this->velocity << endl;
    return true;
}
bool Car::ison() const
{
    if (this->mode == On)
        return true;
    else
        return false;
}
int Car::getvel() const
{
    return this->velocity;
}
void Car::showinfo() const
{
    cout << "The information of car: mode is " << (this->getmode())
         << ", velocity is " << this->velocity << endl;
}
std::string Car::getmode() const
{
    if (this->mode) // On
        return "On";
    else // Off
        return "Off";
}

bool Driver::velup(Car &car, int v)
{
    car.velocity += v;
    if (car.velocity >= Car::Maxvel)
    {
        cout << "Increase velocity by driver: mode is "
             << car.getmode() << ", velocity is " << car.velocity
             << ". It is out of Maxvel." << endl;
        ;
    }
    return true;
}
bool Driver::veldown(Car &car, int v)
{
    car.velocity -= v;
    cout << "Decrease velocity by driver: mode is "
         << car.getmode() << ", velocity is " << car.velocity << endl;
    return true;
}
void Driver::setmode(Car &car)
{
    if (car.mode == Car::On)
        car.mode = Car::Off;
    else
        car.mode = Car::On;
    cout << "Set the mode of car by driver:" << endl
         << "The mode of car is:" << car.getmode() << endl;
}
bool Driver::ison(Car &car) const
{
    if (car.mode == Car::On)
        return true;
    else
        return false;
}

int main(int argc, char *argv[])
{
    Car car;
    car.showinfo();
    car.velup(120);
    
    Driver driver;
    driver.setmode(car);
    car.showinfo();
    driver.veldown(car, 100);
    driver.velup(car, 150);

    return 0;
}