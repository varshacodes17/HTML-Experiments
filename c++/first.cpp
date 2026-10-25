#include <iostream>
using namespace std;

int main()
{
    int a, b, diff;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    diff = a - b;

    (diff == 0) ? cout << "Difference is Zero" :
    (diff > 0) ?
        ((diff % 2 == 0) ? cout << "Positive Even" :
                           cout << "Positive Odd") :
        ((diff % 2 == 0) ? cout << "Negative Even" :
                           cout << "Negative Odd");

    return 0;
}