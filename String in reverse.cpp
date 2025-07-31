#include <iostream>
using namespace std;

int main() {
    string str;
    int i;
    cout<<"Enter your string: ";
    cin>>str;
    for(i=str.length(); i>=0; i--){
        cout<<str[i];
    }
    cout<<"\nYour string is in reverse";
    return 0;
}

OUTPUT:
Enter your string: hello
olleh
Your string is in reverse

=== Code Execution Successful ===
