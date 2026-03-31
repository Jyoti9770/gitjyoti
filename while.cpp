#include<iostream>
using namespace std;

int main(){
    //print no from 1 to n
    // int count=1;
    // while(count<=5){
    //     cout<<count<<"";
    //     count++;
    // }

    //print sum of n numbers

    int n=4;
    int i=1;
    int sum=0;
    while(i<=n){
        cout<<i<<endl;
        sum=sum+i;
         i++;
    } 
    cout<<sum;
    return 0;
}