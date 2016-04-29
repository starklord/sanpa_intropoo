#include <stdio.h>
#include <stdlib.h>
int primo(int n){
   int i,condicion;
      if(n!=1 && n!=0){
         for(i=2;i<=n;i++)
            if(n%i==0)
               if(n==i) condicion=1;
               else{
                  condicion=0;
                  break;
               }
      }
      else condicion=0;
   return condicion;
}
//************
int main(){
   int i = 0;
   int n = 0;
   while(i<100){
        if(primo(n)==1){
            i++;
            printf("%d ",n);
        }
        n++;
   }
   return 0;
}
