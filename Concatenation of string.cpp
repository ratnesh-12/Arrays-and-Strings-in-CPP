#include <iostream>
using namespace std;

int main() {
    string str1;
    cout<<"Enter 1st string: ";
    cin>>str1;
    string str2;
    cout<<"Enter 2nd string: ";
    cin>>str2;
    string str3 = str1 + str2;
    int n = str3.length();
    cout<<"Length of your string: "<<n;
    return 0;
}

OUTPUT:
Enter 1st string: hello
Enter 2nd string: world
Length of your string: 10

=== Code Execution Successful ===
