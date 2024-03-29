#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

      char* s;
      s = (char*)malloc(1024*sizeof(char));
      scanf("%s ",s);
      int c[10] = {0};
      for(int i=0;i<strlen(s);i++){
          if(isdigit(s[i])){
              c[s[i]-'0'] ++;
          }
      } 
      for(int i=0;i<10;i++){
          printf("%d ",c[i]);
      }
      free(s);
    return 0;
}
