#include<stdio.h>
int main(){
    int first=0,next,second=1;
    int c,n;
    printf("enetr the no of fibonacci terms %d",n);
    scanf("%d",&n);
    printf(" Required fibonacci series");
    for(c=0;c<n;c++){
     if(c<=1){
         next=c;
      }
      else{
          next=first+second;
          first=second;
          second=next;
      }
        printf("%d\t",next);
}
return 0;
}
