#include<iostream>
#include<string.h>
#include <bits/stdc++.h> // For reverse function
using namespace std;

int main() {
    
    // Creating a string
    string greeting = "Welcome to GfG!";
    
    // Accessing string
    cout << greeting<<endl;

    // size of string object using size() method
    cout << greeting.size() << endl;

    // size of string object using length method
    cout << greeting.length() << endl;

    string name, T;
    cout << "Enter your name: ";
    // Taking string as input
    getline(cin, name);

    //spliting the sentence on the basis of charactors
    stringstream X(name);
    while(getline(X, T, ' ')){
        cout<<T<<endl;
    }
    
    cout << "Entered name: " << name<<endl;

   // Concatenation str1 and str2
    greeting.append(name);
    cout << "Concatenated string: " << greeting << endl;

    //to Copy a String in C++
    char copyname[20];
    strcpy(copyname, name.c_str());
    cout << "Copied name: " << copyname << endl;

    // Find position of ':' using find()
    int pos = name.find("n");

    //string substr() function is used to extract a substring from the given string
    //syntax: substr(pos, len);
    // Extract substring after pos
    string sub = name.substr(pos, 3);
    cout << "Substring is: " << sub<<endl;


    // Using reverse() function to reverse s
    reverse(name.begin(), name.end());
    cout<<"reverse: "<<name<<endl;

    
    return 0;
}