// Your code here...
#include <stdio.h>
int main(){
    int n ,pro=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     pro *= i;
    }
    printf("%d",pro);
}