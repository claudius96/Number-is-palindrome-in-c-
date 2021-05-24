#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int x) {
    //complete the function
    /*palindrome function such that
    626 when reversed is 626 */
    string s =to_string(x);
    string first, last;
    int size = s.size();
    first.push_back(s[0]);
    first.push_back(s[1]);
    last.push_back(s[size-1]);
    last.push_back(s[size-2]);
    if(last == first)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
