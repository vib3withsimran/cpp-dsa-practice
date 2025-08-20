#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;

//checking disjoint
bool Check_disjoint(vector<int> a, vector<int>b){
    set<int> hashset;
    for(int num: a){
        hashset.insert(num);
    }


    for(int num:b){
        if(hashset.find(num) != hashset.end()){
            return false;
        }
    }
    return true;

}

//checking subset
bool Check_subset(vector<int> a, vector<int> b){
    unordered_map<int, int> hashSet;
    for(int num: a){
        hashSet[num]++;
    }

    //if condition
    for(int num: b){
        if(hashSet.find(num) == hashSet.end() || hashSet[num]==0){
            return false;
        }
        hashSet[num]--;
    }
    return true;
}

int main(){
    vector<int> a= {1, 7, 1, 13, 21, 3, 7, 3};
    vector<int> b= {1, 3, 7, 1, 7};

    if(Check_subset(a,b) == 1){
        cout<<"Set b is subset of set a";
    }
    else{
        cout<<"Set b is not a subset of set a";
    }

    cout<<endl;
    cout<<Check_disjoint(a,b);

    return 0;
}
