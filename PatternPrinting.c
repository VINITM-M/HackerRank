#include<stdio.h>

int main(){
  int n;
  scanf("%d ",&n);
  for(int i=1;i<2*n;i++){
    for(int j=1;j<2*n;j++){
      int a,b;
      a =i;
      b = j;
      if(a>n){
        a = 2*n - a;
      }
      if(b>n){
        b = 2*n - b;
      }
      if(a<b){
        a = a;
      }
      else{
        a = b;
      }
    printf("%d ",n-a+1);
    }
    printf("\n");
  }
}