#include <iostream>
using namespace std;

int main() {
    int n = 10; // kích thước của trái tim (n x n)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0 && j % 4 == 0) || (i == 1 && j % 4 == 1) ||
                (i == 2 && (j % 4 == 2 || j % 4 == 0)) ||
                (i == 3 && (j % 4 == 3 || j % 4 == 1)) ||
                (i >= 4 && i < n && j >= (n/2 - i/2) && j < (n/2 + i/2))) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
