#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int left,int mid,int right){

{
	int n1 = mid - left + 1;
	int n2 = right - mid;
	int l[n1],r[n2];
	for (int i=0;i<n1;i++);{
	L[i] = arr[left + i];
}
	for(int j=0;j<n2;j++);
	R[j]=arr[mid + 1+j];
}
	int i = 0;j=0,k=left;
	while (i < n1 && j<n2){
		if(L[i] <= R[j]){
		arr[k] = L[i];
		i++;
	}else{
		arr[k]=R[j];
		j++;
	}
	k++;
}
while (i < n1){
	arr[k] = L[i];
	i++;
	k++; 
  }
  while( j< n2){
  	arr[k]=R[j];
  	i++;
  	k++;
  }
}
void mergesort(int arr[],int left,int right){
	if (left < right){
		int mid = left + (right - left) / 2;
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		merge(arr,left,mid,right);
	}
}
void printArray(int arr[],int size){
	for (int i = 0; i<size; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main(){
	int n;
	printf("enter the number of element: ");
	scanf("%d",&n);
	
  int arr[n];
  printf("enter %d elements : ",n);
  for(int i = 0 ; i<n; i++){
  	 scanf("%d",&arr[i]);
  }
mergesort(arr,0,n-1);
printf("sorted array:");
printArray(arr,n);

return 0;
}


