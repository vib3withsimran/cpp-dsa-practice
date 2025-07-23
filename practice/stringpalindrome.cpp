#include<bits/stdc++.h>
using namespace std;

//question- A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers. Given a string s, return true if it is a palindrome, or false otherwise.


//In C++, the isalnum function is part of the <cctype> header and is used to check whether a given character is alphanumeric. An alphanumeric character is either a letter (A-Z, a-z) or a digit (0-9).
bool palindrome(string s){
    int start = 0;
    int end = s.size() -1;

    while(start<=end){
        if(!isalnum(s[start])){
            start++;
            continue;
        }
        if(!isalnum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end])){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

bool plaindrome2(string s){
    string t;
        for(char c : s){
            if(c >= 'a' && c <= 'z'){
                t += c;
            }else if(c>='A' && c<='Z'){
                t += tolower(c);
            }else if(c>='0' && c<='9'){
                t+= c;
            }
        }
        int n = t.size();
        for(int i = 0; i < n/2;i++){
            if(t[i]!=t[n-i-1]){
                return false;
            }
        }
        return true;
}

int main(){
    string s= "A man, a plan, a canal: Panama";
    if(palindrome(s)==0){
        cout<<"not a palindrome";
    }
    else{
        cout<<"it is palindrome string";
    }

    return 0;

}