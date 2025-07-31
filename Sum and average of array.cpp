#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements:";
    for (i=0; i<n; i++) {
        cin>>arr[i];
    }
    int sum=0;
    for (i=0; i<n; i++) {
        sum = sum+arr[i];
    }
    int average = sum/n;
    cout <<"Sum: "<<sum<<endl;
    cout <<"Average: "<<average<<endl;

    return 0;
}

OUTPUT:
Enter number of elements: 6
Enter the elements:11
22
33
44
55
66
Sum: 231
Average: 38

=== Code Execution Successful ===  
