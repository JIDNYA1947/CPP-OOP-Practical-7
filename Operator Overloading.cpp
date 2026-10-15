#include <iostream>
using namespace std;

class Bill
{
public:
    int amount;

    Bill(int a)
    {
        amount = a;
    }

    Bill operator+(Bill b)
    {
        Bill temp(amount + b.amount);
        return temp;
    }
};

int main()
{
    Bill item1(500);
    Bill item2(300);

    Bill total = item1 + item2;

    cout << "Total Shopping Bill = Rs. "
         << total.amount;

    return 0;
}
