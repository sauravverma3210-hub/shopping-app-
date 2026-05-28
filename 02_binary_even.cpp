#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if((n & 1) == 0) {// if we use or then it will not work for even case
        cout << n << " is Even";
    }
    else {
        cout << n << " is Odd";
    }

    return 0;
}