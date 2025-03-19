// Your code here...
# include <stdio.h>
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    if(x-n>0){
        printf("Profit");
    }
    else if(x-n==0){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
}