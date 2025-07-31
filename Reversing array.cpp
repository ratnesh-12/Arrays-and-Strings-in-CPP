#include <iostream>
using namespace std;

int main() {
    int arr[50], num, temp, i, j;
    cout << "Enter the total number of elements: ";
    cin >> num;

    for(i=0; i<num; i++){
        cout << "Enter element " << i + 1<<":";
        cin >> arr[i];
    }
    for(i=0, j=num-1; i<j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "In reverse order: ";
    for (i=0; i<num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

OUTPUT:
Enter the total number of elements: 6
Enter element 1:11
Enter element 2:22
Enter element 3:33
Enter element 4:44
Enter element 5:55
Enter element 6:66
In reverse order: 66 55 44 33 22 11 


=== Code Execution Successful ===
