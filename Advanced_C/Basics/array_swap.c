/*
   This program shows how to swap array elements with having another array
   */

#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5,6,7},size,i,j,m;
  //printf("%zu",sizeof(arr));
  size=sizeof(arr)/4;
  printf("Array before swap\n");
  for(m=0;m<size;m++){
      printf("%d ",arr[m]);
  }
  
  for(i=0,j=size-1;i<j;i++,j--){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
  }
  printf("\nArray after swap\n");
  for(m=0;m<size;m++){
      printf("%d ",arr[m]);
  }
  printf("\n");
}
