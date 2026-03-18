#include <iostream>
using namespace std;

#define two 22321

int main()
{
    int num;
    cout << "enter a number ";
    cin >> num;
    int newnnum = num;
    int o = num % 10;
    int t = (num / 10) % 10;
    int h = num / 100;
    int sum = o * o * o + t * t * t + h * h * h;
    if (num == sum)
    {
        cout << "the number is a armstrong number" << endl;
    }
    else
    {
        cout << "the number is not a armstrong number" << endl;
    }
}
