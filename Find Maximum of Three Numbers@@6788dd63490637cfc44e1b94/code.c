// Your code here...
#include <stdio.h>
int main(){
    int a,s,d;
    scanf("%d %d %d",%a,%s,&d);
    if(a>s && a>d){
        printf("%d", &a);
    }
    else if(s>a && s>d){
        printf("%d", &d);
    }
    else{printf("%d", &s);}
}