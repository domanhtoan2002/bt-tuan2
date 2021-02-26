#include <iostream>
using namespace std;
int main()
{
    double k;
    cin >> k;
    cout << "Gia tri cuoi cung cua K la: ";
    if (k<3)
    {
        cout << k;
        return 0;
    }
    do
    {
        k/=3;
    } while (k>3);
    cout << k;
}
