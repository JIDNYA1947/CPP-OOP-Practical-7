```cpp
#include <iostream>
using namespace std;

class Device
{
public:
    virtual void operate()
    {
        cout << "Smart device is operating." << endl;
    }
};

class Light : public Device
{
public:
    void operate() override
    {
        cout << "Smart light is switched on." << endl;
    }
};

class Fan : public Device
{
public:
    void operate() override
    {
        cout << "Smart fan is switched on." << endl;
    }
};

class AC : public Device
{
public:
    void operate() override
    {
        cout << "Air conditioner is switched on." << endl;
    }
};

int main()
{
    Device *d;

    Light l;
    Fan f;
    AC a;

    d = &l;
    d->operate();

    d = &f;
    d->operate();

    d = &a;
    d->operate();

    return 0;
}
```
