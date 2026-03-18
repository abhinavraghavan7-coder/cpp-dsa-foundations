#include <iostream>
using namespace std;

int main(){
    int principal;
    int rate;
    int time;

    cout << "Enter the principal: " << endl;
    cin >> principal;

    cout << "Enter the rate of interest: ";
    cin >> rate;

    cout << "Enter the time: ";
    cin >> time;

    int si = (principal * rate * time) / 100;

    cout << "The simple interest = " << si << endl;

    return 0;
}