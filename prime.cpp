#include <iostream>
#include <math.h>

using namespace std;
 
int main(){
    int n;
    cout << "\nNhap so n de xem co phai la so nguyen to khong : ";
    cin >> n;
    if(n < 2){
        cout << " no " << endl ;
        return 0;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        cout << " yes " << endl ;
    }else{
        cout <<  " no " << endl ;
    }
}
