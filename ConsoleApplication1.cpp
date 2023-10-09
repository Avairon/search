#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void first(int* arr, int arg) {
    bool result = false;

    int arg2 = sizeof(arr) / sizeof(int);
    int lenght = pow(arg2, 0.5);

    for (int y = 0; y < lenght; y++) {
        for (int x = 0; x < lenght; x++) {
            if (array(x, y) == arg) { cout << x << " " << y << "\n"; result = true; break; }
        }
    }
    if (result == false) cout << "This number is missing from the array";
    return;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, 
                     {4, 5, 6}, 
                     {7, 8, 9}};

    int input;

    cout << "Input the search number\n";
    cin >> input;

    return 0;
}
