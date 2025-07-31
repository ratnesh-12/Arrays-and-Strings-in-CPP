#include <iostream>
using namespace std;

int main() {
    string str;
    int i;
    bool isPalindrome = false;
    cout<<"Enter your string: ";
    cin>>str;
    int n = str.length();
    for(i=0; i<n/2; i++){
        if(str[i] != str[n-1-i]){
            isPalindrome = true;
            break;
        }
    }
    if(isPalindrome){
        cout<<"Your string is not palindrome";
    }
    else{
        cout<<"Your string is palindrome";
    }
    return 0;
}

OUTPUT:
Enter your string: racear
Your string is not palindrome

=== Code Execution Successful ===
