#include<iostream>
using namespace std;
int main(){
    cout<<"write an alphabet, i'll tell you whether it is vowel or consonant"<<endl;
    char c;
    cin>>c;
    /* if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        cout<<"vowel"<<endl;
    }
    else{
        cout<<"consonant"<<endl;
    }}
    else{
        cout<<"invalid input"<<endl;
    } */
   switch (c)
   {
    case 'a':
    case 'A':
        cout<<"vowel"<<endl;
        break;
    case 'e':
    case 'E':
        cout<<"vowel"<<endl;
        break;
    case 'i':
    case 'I':
        cout<<"vowel"<<endl;
        break;
    case 'o':
    case 'O':
        cout<<"vowel"<<endl;
        break;
    case 'u':
    case 'U':
        cout<<"vowel"<<endl;
        break;
   
   default:
   cout<<"consonant"<<endl;
    break;
   }
   
    return 0;
}