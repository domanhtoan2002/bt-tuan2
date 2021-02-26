#include<iostream>

using namespace std;

int main()
{
    double x, b=1;
    int y, i;
    cout << "Nhap vao ban phim x va y: "; 
    cin >> x >> y ;
    for( i = 1; i <= y; i ++){
     b= x*b ;
    cout << "x^y = " ;
    cout << b;
}
    return 0;
}
