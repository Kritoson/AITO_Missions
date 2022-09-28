#include <iostream>
using namespace std;

int main() {

    int numbers[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int num,count=0;

    cout << "The array numbers are: ";

    for (int i = 0; i < 9; ++i) {
        cout << numbers[i] << "  ";
    }

    cout << "\nEnter a number: ";

    cin >> num;
    for (int s = 0; s < 9 / num; s++) {
        for (int b = 0; b < num; ++b) {
            cout << numbers[count];
            count++;
        }
        cout << " , ";
    }
    
    return 0;
}