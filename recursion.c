
#include <stdio.h>
int values(int n,int a,int b,int c){
    if(n==1){
        return a;
    }
    else if(n==2){
        return b;
    }
    else if(n==3){
        return c;
    }
    else{
        return values(n-1,a,b,c)+values(n-2,a,b,c)+values(n-3,a,b,c);
    }
    
}

int main()
{
    int n1=5,a1=1,b1=2,c1=3;
    int ans = values(n1,a1,b1,c1);
    printf("%d ",ans);
}
