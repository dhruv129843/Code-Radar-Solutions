// Your code here...
# include <stdio.h>
int main(){
    int n,x,y;
    scanf("%d %d %d",&n,&x,&y);
    if (n == x && x == y) {
        printf("Equilateral");
    } else if (n == x || x == y || y == n) {
        printf("The triangle is isosceles.\n");
    } else {
        printf(" Scalene");
    }

    return 0;
}