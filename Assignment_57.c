#include<stdio.h>
int linearsearch(int arr[], int size, int element){
	int i;
	for( i=0; i<size; i++){
		if(arr[i]==element){
			return i;
		}
	}
	return -1;
}

int main(){
	int arr[12]={23,45,23,56,76,34,12};
	int size = sizeof(arr)/sizeof(int);
	int element = 56;
	int index = linearsearch(arr,size,element);
	printf("The element %d was found at index %d ", element,index);
	return 0;
}
