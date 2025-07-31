#include <iostream>
using namespace std;

int main() {
    int i, numbers[5];

    cout << "Enter 5 numbers: ";
    for (i=0; i< 5; i++)
        cin >> numbers[i];

    cout << "You entered: ";
    for (i=0; i<5; i++)
        cout << numbers[i] << " ";

    cout << endl;
    return 0;
}

OUTPUT:
Enter 5 numbers: 20 40 50 60 10
You entered: 20 40 50 60 10 

=== Code Execution Successful ===
