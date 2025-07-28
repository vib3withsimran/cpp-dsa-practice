#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

// the definition of hashing in a naive way, it is nothing but the combination of the steps, pre-storing, and fetching.

void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}

int main(){
    int n;
    int arr[5] = {1,3,1,3,4};
    

    //brute force approach
    int hash[4] = {0}; // hash table to store frequency of elements
    for(int i=0; i<5; i++){
        hash[arr[i]]++; // increment the count of the element in the hash table
    }
    for(int i=1; i<5; i++){
        cout << "Element: " << i << " Frequency: " << hash[i] << endl; // print the frequency of each element
    }

    //character hashing
    //optimized approach
    string s = "hakuna matata";
    int charHash[26] ={0};
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' ') { // ignore spaces
            charHash[s[i] - 'a']++; // increment the count of the character in the hash table
        }
    }
    for(int i=0; i<26; i++){
        if(charHash[i] > 0) {
            cout << "Character: " << char(i + 'a') << " Frequency: " << charHash[i] << "\t\t\t\t"; // print the frequency of each character
        }
    }cout<<endl<<"\n";

    //when both lowercase and uppercase characters are present
    string s2 = "Hakuna Matata AA";
    int charHas2[256] = {0};
    for(int i=0; i<s2.length(); i++){
        if(s2[i] != ' ') { // ignore spaces
            charHas2[s2[i]]++; // increment the count of the character in the hash table
        }
    }
    for(int i=0; i<256; i++){
        if(charHas2[i] > 0) {
            cout << "Character: " << char(i) << " Frequency: " << charHas2[i] << endl; // print the frequency of each character
        }
    }

//  three methods of hashing- division, folding, and mid-square method
//divison method- taking module of the key with the size of the hash table. and if two keys have the same hash value, then we can use a linked list to store the elements in the same index of the hash table.

    int arr2[6] = {10,5,10,15,10,5};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    Frequency(arr2, m);

    return 0;
}
