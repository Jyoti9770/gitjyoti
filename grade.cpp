#include<iostream>
using namespace std;

int main(){
    //lowercase and uppercase
    //ASCII value of A=65and a=97
    char ch;
    cout<<"enter char:";
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"lowercase \n";
    }
    else{
        cout<<"uppercase \n";
    }




    // int marks;
    // cout<<"enter marks:";
    // cin>>marks;
    // if(marks>=90){
    //     cout<<"A\n";
    // }
    // else if (marks>=80 && marks<90){
    //     cout<<"B\n";
    // }
    // else{
    //     cout<<"C\n";
    // }
    
    return 0;
}