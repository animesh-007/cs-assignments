#include <stdio.h>
int main(){
int a, b, c;
printf("enter three numbers\n");
scanf("%d%d%d", &a, &b, &c);
if(a>b){
   if(b>c){
      printf("Greatest number is %d", a);
           }
}

if(b>c){
   if(b>a){
      printf("Greatest number is %d", b);
}
}
if(c>a){
    if(c>b){
      printf("Greatest number is %d", a);
}
}
return 0;
}
  
