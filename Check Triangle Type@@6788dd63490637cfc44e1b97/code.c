// Your code here...
# include <stdio.h>
int main(){
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    if(n==x &&x==y &&y==n){
printf("Equilateral");
    }
    if((n==x!=y || n!=x==y || n==y!=x)){
printf("Isosceles");
    }
    else{
printf("Scalene");
    }
    }