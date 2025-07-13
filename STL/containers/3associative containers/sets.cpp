// Think of them as "automatic organizers" - Story: Like a librarian who automatically arranges books
// Set: A bookshelf where books are automatically sorted alphabetically, no duplicates allowed
// Map: A phone book where names (keys) are automatically sorted, and each name has a phone number (value)
// Multiset/Multimap: Same as above, but allows duplicate books/names
// Key trait: Elements are automatically sorted

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s = {3,5,32,2,12};
    for(auto x: s){
        cout<<x<<" ";
    }

    //start from declaration and initialising



    return 0;
}