// Your code here...

void fibonacciSeries(int n){
    int p1=1 ;
    
    int p2=0 ;
          // Print the first two numbers with a space

    
    for(int i=1;i<=n;i++){
    if(i>2){
        int p3= p2+p1;
        p1=p2;
       p2=p3;
        printf("%d ",p3);
    }
    else  if(i==2){
        printf("%d",p1);
    }
    else if(i==1){
        printf("%d",p2);
    }
    }


}