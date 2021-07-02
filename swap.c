
#include <stdio.h>
void swap_max(int s[], int l, int n ){
    int large=s[n],nos,flag=0;
  for(int i=n;i<l;i++){
    if(s[i]>large){
    flag=1;
    large=s[i];
     nos=i;
      }
      }
      if(n!=l-1 && (flag==1)){
      s[nos]=s[n];
      s[n]=large;
      }
      for(int i=0;i<l;i++){
    printf("%i ",s[i]);
    }
    printf("\n");
         }
         
  void ssort(int s[], int l)  {
  for(int i=0;i<l;i++)
    swap_max(s,l,i);
    }
