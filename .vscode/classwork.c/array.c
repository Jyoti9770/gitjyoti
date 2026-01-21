#include <stdio.h>
#include <limits.h>
int main(){
  // int arr[6]={0,-5,3,-4,5,7};
  // int maxsum=INT_MIN;
  // for(int i=0;i<6;i++){
  //   int currsum=0;
  //   for(int j=0;j<6;j++){
  //     currsum=currsum+arr[j];}
  //     if(currsum>maxsum){
  //       maxsum=currsum;
  //   }
  // }
  // printf("%d",maxsum);

  // int arr[5]={1,2,3,2,1};
  // int isTrue=1;
  // for(int i=0;i<5/2;i++){
  //   if(arr[i]!=arr[5-i-1]){
  //     isTrue=0;
  //   }
  // }
  // if(isTrue=1){
  //   printf("haii");
  // }
  // else{
  //   printf("nhi haii");
  // }

  //{10,20,30,40,50}={20,30,40,50,10}

  // int arr[5]={10,20,30,40,50};
  // int first=arr[0];
  // for(int i=0; i<5; i++){
  //   arr[i]=arr[i+1];
  // }
  // arr[4]=first;
  // for(int k=0;k<5;k++)
  // {
  // printf("%d",arr[k]);}

  // int arr[5]={1,2,3,5,6,5,4};
  // int k=3;
  // int n=7;   sizeof(arr)/sizeof(arr[0]);
  // int windowSum=0;3
  // for(int i=0; i<k; i++){
  //   windowSum=windowSum+arr[i];
  // }
  // int maxsum=windowSum;

  // for(int j=k; j<n; j++){
  //   windowSum=windowSum+arr[j]-arr[j-k];
  //   if(windowSum>maxsum){
  //       maxsum=windowSum;
  //   }
  // }
  // printf("%d",maxsum);

    // int arr[5]={1,2,3};
    // for(int i=0;i<3;i++){
    //     printf("%d",arr[i]);
    // }
    //sum
    // int arr[5]={1,2,3,4};
    // int sum=0;
    // for(int i=0; i<4; i++)
    // {
    //     sum=sum+arr[i];
    // }
    // printf("%d",sum);
    //maximum
    // int arr[3]={1,2,4,3};
    // int max=arr[0];
    // for(int i=0; i<4; i++)
    // {
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }
    // printf("%d",max);
    //evenodd
    // int arr[6]={1,2,3,4,5};
    // for(int i=0; i<=5; i++){
    //     if(arr[i]%2==0){
    //         printf("%d",i);
    //     }
    //     else if(arr[i]%2!=0){
    //         printf("%d",i);
    //     }
    // }
    int arr[5]={2,-4,7,-1,6};
    int k=3;
    int wSum=0;
    for(int i=0;i<k;i++){
      wSum+=arr[i];
    }
   int mSum=wSum;
    for(int i=k;i<5;i++){
      wSum+=arr[i]-arr[i-k];
      if(wSum>mSum){
        mSum=wSum;
      }
    }
    printf("%d",mSum);












    return 0;
}