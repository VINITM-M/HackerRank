#include <stdio.h>
int max_of_four(int a1,int b1,int c1,int d1){
    if((a1>b1 ) &&(a1>c1 )&&(a1>d1)){
        return a1;
    }
    else if((b1>c1)&&(b1>d1)){
        return b1;
    }
    else if((c1>d1)){
        return c1;
    }
    else{
        return d1;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}