#include <iostream>
using namespace std;

void weirdAl(long long n){
    while (n != 1) {
           cout << n << " ";
           if (n % 2 == 0) {
               n /= 2;
           } else {
               n = 3 * n + 1;
           }
       }
       cout << 1;
}
int main(){
    long long n;
    cin >> n;
    weirdAl(n);
    return 0;
}
