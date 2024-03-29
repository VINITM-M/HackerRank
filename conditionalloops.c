#include<stdio.h>


char* num[] = {"one","two","three","four","five","six","seven","eight","nine"};

int main(){
    int n;
    scanf("%d ",&n);
    if (n<1){
        return 1;
    }
    else if (n<10){
        printf("%s ",num[n-1]);
    }
    else{
        printf("Greater than 9");
    }
}