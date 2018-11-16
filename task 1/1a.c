#include<stdio.h>
#include<stdlib.h>

int main(){
char p;
int n=0;
  FILE *fptr;
  fptr = fopen("/home/pavan/Downloads/os/hey.txt","r");
  if(fptr == NULL){
    printf("file not found");
  }
while((p = fgetc(fptr))!= EOF ){
    if(p =='b')
    printf("%c",p);
  }
fclose(fptr);
}
