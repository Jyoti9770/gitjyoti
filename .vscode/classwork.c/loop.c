#include <stdio.h>

int main()
{
//     int num=65;
//    for(int i=0; i<=3; i++){
//     for(int j=3; j>=i; j--)
//     {
//         printf(" ");
//     }
//     for(int k=0; k<=i; k++)
//     {
//     printf("%c",num++);
//     }
//     for(int p=1; p<=i; p++)
//     {
//         printf("%c",num++);
//     }
//     printf("\n");
//    }

// for(int i=3; i>=0; i--){
//     for(int j=0; j<=i; j++){
//         printf("%d",j);
//     }
//     printf("\n");
// }
    int num=65;
   for(int i=0; i<4; i++){
    for(int j=0; j<=i; j++)
    {
        printf(" ");
    }
    for(int k=3; k>i; k--)
    {
    printf("%c",num++);
    }
    for(int p=3; p>=i; p--)
    {
        printf("%c",num++);
    }
    printf("\n");
   }
return 0;
}