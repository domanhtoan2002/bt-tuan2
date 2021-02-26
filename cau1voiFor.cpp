#include <iostream>
using namespace std;
int main()
{
    cout << "Cac so chan khong lon hon 100 la: ";
    for (int i=0; i<=100; i++)
    {
        if (i%2==0) cout << i << ' ';
    }
    return 0;
}
