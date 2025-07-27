#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

int countTabs(vector<string> &arr) {
        // Your Code goes here.
        unordered_map<string, string> hashMap;
        
        for(auto &i: arr){
            if(i == "END"){
                hashMap.clear();
            }
            else{
                if(hashMap[i] == "True"){
                    hashMap.erase(i);
                }
                else{
                    hashMap[i] = "True";
                }
            }
        }
        return hashMap.size();
    }
// unordered_map is an unordered associative container that stores data in the form of unique key-value pairs. But unlike map, unordered map stores its elements using hashing. This provides average constant-time complexity O(1) for search, insert, and delete operations but the elements are not sorted in any particular order.

int main(){
    // Creating an unordered_map with integer
    // keys and string values
    unordered_map<int, string> umap = {{1, "python"}, {2, "cpp"}, {3, "java"}};
    for(auto i: umap){
        cout << i.first << ": " << i.second << endl; // printing key-value pairs
    }

    //creating an empty unordered_map
    unordered_map<int, string> umap2;

    //inserting elements using insert function
    umap2.insert({4, "javascript"});
    umap2.insert({5, "ruby"});
    cout << "After inserting elements:" << endl;
    for(auto i: umap2){
        cout << i.first << ": " << i.second << endl; // printing key-value pairs
    }

    //accessing elemnts
    cout << "Element with key 2: " << umap[2] << endl; // accessing element with key 2
    cout<< "Element with key 4: " << umap2.at(4) << endl; // accessing element with key 4

    //updating an element
    umap[2] = "C++"; // updating value for key 2
    for(auto i: umap){
        cout << i.first << ": " << i.second << endl; // printing key-value pairs after update
    }


    //finding an element with key 3
    auto it = umap.find(3);
    if(it != umap.end()){
        cout<<"Found element with key"<< it->first << ": " << it->second << endl; // printing key-value pair if found
    }
    else{
        cout << "Key not found" << endl; // key not found
    }

    //traversing the unordered_map
    cout << "Traversing the unordered_map:" << endl;
    for(auto it = umap.begin(); it != umap.end(); ++it){
        cout << it->first << ": " << it->second << endl; // printing key-value pairs
    }
// elements are traversed may not match the order in which they were inserted.

    //deleting an element
    umap2.erase(4); // deleting element with key 4
    cout << "After deleting key 4:" << endl;
    for(auto i: umap2){
        cout << i.first << ": " << i.second << endl; // printing key-value pairs after deletion
    }

    //practice
    vector<string> arr = {"1", "2", "1", "END", "2"};
    int count =0;
    cout<<"Total opened gates: "<< countTabs(arr)<<endl;

    return 0;
}