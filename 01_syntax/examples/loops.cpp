// C++ Loops Example
#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 5; i++) {
        cout << "This is loop iteration " << i << endl;
    }
    int n = 5;
    while(n > 0) {
        cout << "Countdown " << n << endl;
        n--;
    }
    return 0;
}