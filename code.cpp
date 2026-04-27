#include <iostream>
using namespace std;
int main(){

    //square pattern.....

    // int n;
    // cout<<"enter a num"<<endl;
    // cin>>n;
    // for(int i=1; i<=n;i++){   
    //     for(int j=1; j<=n; j++){        
    //         cout<<"*";
    //     }
    // cout<<endl;
    // }


    // int n;
    // cout<<"enter a num"<<endl;
    // cin>>n;
    // for(int i=0; i<n;i++){  
    //     char ch='A' ;
    //     for(int j=0; j<n; j++){        
    //         cout<<ch;
    //         ch =ch+1;
    //     }
    // cout<<endl;
    // }


    // int n;
    // cout<<"enter a num"<<endl;
    // cin>>n;
    // int num=1;
    // for(int i=0; i<n;i++){   
    //     for(int j=0; j<n; j++){        
    //         cout<<num;
    //         num=num+1;
    //     }
    // cout<<endl;
    // }

    // int n;
    // cout<<"enter a num"<<endl;
    // cin>>n;
    // char ch='A';
    // for(int i=1; i<=n;i++){   
    //     for(int j=1; j<=n; j++){        
    //         cout<<ch;
    //         ch=ch+1;
    //     }
    // cout<<endl;
    // }

    //triangle pattern..... 
    // int n;
    // cout<<"enter a num"<<endl;
    // cin>>n;
    // for(int i=0; i<n;i++){   
    //     for(int j=0; j<=i; j++){        
    //         cout<<"*";
    //     }
    // cout<<endl;
    // }

    // int n;
    // cout<<"enter a num"<<endl;
    // cin>>n;
    // for(int i=0; i<n;i++){   
    //     for(int j=0; j<=i; j++){        
    //         cout<<(i+1);
    //     }
    // cout<<endl;
    // }


    int n;
    cout<<"enter a num"<<endl;
    cin>>n;
    for(int i=n; i>0;i--){   
        for(int j=i; j>0; j--){        
            cout<<"*"<<" ";
        }
    cout<<endl;
    }
    return 0;
}
