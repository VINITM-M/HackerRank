#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Without using dynamic array   

    int n;
    scanf("%d ",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
        sum+=a[i];
    }  
    printf("%d ",sum);
    */
    
    int n;
    scanf("%d ",&n);
    int s=0;
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));
    if (ptr==NULL){
        exit(EXIT_FAILURE);
    }
    for(int i=0;i<n;i++){
        scanf("%d ",ptr+i);
        s = s + *(ptr+i);
    }
    printf("%d ",s);
    free(ptr);
    return 0;
}
