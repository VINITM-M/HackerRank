#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n1,n2;
    scanf("%d %d\n ",&n1,&n2);
    float a,b;
    scanf("%f %f",&a,&b);
    
    printf("%d %d\n",n1+n2,n1-n2);
    printf("%.1f %.1f",a+b,a-b);
    
    return 0;
}
