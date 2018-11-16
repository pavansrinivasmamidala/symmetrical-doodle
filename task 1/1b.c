#include<stdio.h>

int main(){
  char p;
  FILE *fp;
  fp = fopen("hello.txt","w");
  printf("enter 0 to stop:\n");
  while(scanf("%c",&p)){
    if(p=='0')
    break;
    else
    fputc(p,fp);
  }
  fclose(fp);
  return 0;
}
