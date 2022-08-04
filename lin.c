#include<stdio.h>
int linearserch(int arr[], int size, int key){
int i;
for(i=0;i=size; i++){
if(arr[i]==key) return 1;
}
if(i==size) return -1
}
int main(){
int arr[10];
printf("Enter 10 value: ");
int i;
for(i=0; i<10; i++)
 scanf("%d", &arr[i]);
int key;
printf("Enter element to search for:");
scanf("%d", &key);
if(linearsearch(arr,10,key)==-1)
printf("Element found at %d index",linearsearch(arr,10,key))
return 0;
}