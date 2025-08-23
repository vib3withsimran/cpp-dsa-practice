#include<iostream>
using namespace std;
// In C++, recursion is a technique in which a function calls itself repeatedly until a given condition is satisfied. It is used for solving a problem by breaking it down into smaller, simpler sub-problems.

void printHello(int n) {
    if (n == 0) return;     //Base Condition
    cout << "Hello" << endl;
    printHello(n - 1);      //Recursive Case
}

int nSum(int n){
    if(n==0) return 0;

    int res = n + nSum(n-1);
    return res;
}

void printNnums(int i,int n){
    if(i>n) return;

    cout<<i<<" ";
    printNnums(i+1, n);
}

void printNNnums(int n){
    if(n==0) return;

    cout<<n<<" ";
    printNNnums(n-1);
}

int factorial(int n){
    if(n==0) return 1;

    return (n * factorial(n-1));
}

void reverseArray(int arr[], int start , int end){
    if(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main() {
    //printing hello 5 times
    cout<<"Printing 5 times hello: "<<endl;
    printHello(5);

    //sum of n numbers 
    cout<<"Sum of n numbers:"<<endl;
    int sum= nSum(2);
    cout<<sum;

    //printing 1 to n numbers 
    cout<<"\nprinting 1 to N numbers"<<endl;
    printNnums(1, 15);

    //printing n to 1 numbers
    cout<<"\nprinting N to 1 numbers"<<endl;
    printNNnums(15);

    //factorial 
    cout<<"\nFactorial of 5: "<<factorial(5)<<endl;

    //reverse an array
    int n=5;
    int arr[] = {1,2,3,4,5};
    reverseArray(arr, 0, n-1);
    cout<<"reverse of an array: ";
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}

// Types of Recursions in C++-
// 1.Direct Recursion- the function contains one or more recursive calls to itself. The function directly calls itself in the direct recursion and there is no intermediate function.three types:

// a) Head Recursion: In head recursion, the recursive call is present at the start of the function. It is a kind of linear recursion where only a single recursive call is used.

// b) Tail Recursion: Tail recursion is a linear recursion where it's one and only recursive call is present at the end of the function. The recursive call is generally the last statement in the function.

// c) Tree Recursion: In Tree Recursion, there are multiple recursive calls present in the body of the function. While tracing tree recursion, we get a tree-like structure where multiple recursive calls branch from one function.
// 2.Indirect Recursion-In indirect recursion, the function does not call itself directly but instead, it calls another function which then eventually calls the first function creating a cycle of function calls.