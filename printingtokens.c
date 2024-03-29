#include<stdio.h>

int main(){
  char s;
  scanf("[^\n] ",s);
  char* tok = strtok(str," ");
  while(tok!=NULL){
    printf("%s\n",tok);
    tok = strtok(NULL," ");
  }
}


/*

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
   for(int i=0;i<strlen(s);i++){
       if(s[i]==' '){
           printf("\n");
       }
       else{
           printf("%c",s[i]);
       }
   }

    
    return 0;
}

*/