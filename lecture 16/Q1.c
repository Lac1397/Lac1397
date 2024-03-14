#include <stdio.h>
#include <string.h>
int main(){
  int size;
  scanf("%d",&size);
  char str[size];
  int arr[size];
  scanf("%s", str);
  
  int k=0;
  for(int i=size-1;i>=0;i--){
    arr[k] = str[i];
    k++;
  }

  
int count = 0;
  for(int i=0;i<=size-1;i++){
      if(arr[i]!=str[i]){
        count++;
      }
  }
  
  if(count>0){
    printf("Not Palindrome");
  }else{
    printf("Palindrome");
  }
  return 0;
}