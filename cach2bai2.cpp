#include <iostream>
using namespace std;
int main()
{
    double k;
    cin >> k;
    cout << "Gia tri cuoi cung cua K la: ";
    for (; ; k/=3)
    {
        if(k<3) break;
    }
    cout << k;
}
