// Your code here...
void factorialRange(int start,int end){
  for(int j=start;j<=end;j++){
    printf(factorial(j));
  }
}
int factorial(int n){
    if(n<=1){
        return 1; 
    }
    int product=1;
    for(int i=1;i<=n;i++){
        printf(product *=i);
        return product;
    }
}