#include<stdio.h>
int binarysearch(int arr[], int start, int end, int key){
int i=start, j=end;
while(i<j){
int mid=(i+j)/2;
if(arr[mid] ==key)return mid;
else if (arr[mid]<key)i=mid+1;
else if(arr[mid]>key)j=mid-1;
}
 return -1;
} 
 int main(){
 inr arr[10];int key;printf("Enter keys:");
 sca