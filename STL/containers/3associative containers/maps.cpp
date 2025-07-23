#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    // creating a map of interge keys and string values
    map<int, string> m {{1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}};
    for(auto &p: m){
        cout<<p.first <<" "<< p.second << endl; // printing key-value pairs
    }

    //different ways to initialize a map
    map<int, string> m2; // empty map
    m2[5] = "five"; // inserting a single element
    m2.insert({6, "six"}); // inserting using insert function

    for(auto &p: m2){
        cout<<p.first <<" "<< p.second << endl; // printing key-value pairs
    }

    //using a vector of pairs to initialize a map
    vector<pair<int, string>> v = {{7, "seven"}, {8, "eight"}};
    map<int, string> m3(v.begin(), v.end()); // initializing map from vector
    for(auto &p: m3){
        cout<<p.first <<" "<< p.second << endl; // printing key-value pairs
    }

    // inserting a new element
    m3.insert({9, "nine"});
    cout << "After inserting a new element:" << endl;
    for(auto &p: m3){
        cout<<p.first <<" "<< p.second << endl; // printing key-value pairs
    }

    //accessing elements
    cout << "Element with key 2: " << m.at(1) << endl; // accessing element with key 3
    
    //updating an element
    m[2] = "TWO"; // updating value for key 2
    cout << "After updating key 2: " << m[2] << endl;

    //finding an element in m wwith key 2
    auto it = m.find(2);
    if(it != m.end()){
        cout<<it->first << " " << it->second << endl; // printing key-value pair if found
    }else{
        cout << "Key not found" << endl; // key not found
    }

    //traversing the map
    cout << "Traversing the map:" << endl;
    for(auto it =m.begin(); it != m.end(); ++it){
        cout << it->first << " " << it->second << endl; // printing key-value pairs
    }

    //deleting an element
    m.erase(3); // deleting element with key 3
    cout << "After deleting key 3, key 3 is: null" << endl;
    m.erase(m.begin()); // deleting the first element
    for (auto &p : m) {
        cout << p.first << " " << p.second << endl; // printing key-value pairs after deletion
    }
    

    return 0;
}