#include <iostream>
using namespace std;

class Marks
{
public:
    void calculate(int a, int b)
    {
        cout << "Total Marks = " << a + b << endl;
    }

    void calculate(int a, int b, int c)
    {
        cout << "Total Marks = " << a + b + c << endl;
    }
};

int main()
{
    Marks m;

    m.calculate(80, 75);
    m.calculate(80, 75, 90);

    return 0;
}
