#include <stdio.h>
int main(){
    int a; 
    int reversed=0,remainder;
    printf("enter the number to be reversed:");
    scanf("%d",&a);
    int origanal=a;
    while(a!=0){
        remainder = a%10;
        reversed = reversed *10+remainder;
        a=a/10;

    }
    printf("original number:%d\n",origanal);
    printf("reversed number:%d\n",reversed);
    return 0;
}