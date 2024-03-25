#include<stdio.h>
void accept_arr(int arr[],int si);
void reverse_arr(int arr[],int si);
int main(){
	int arr[5],total;
	accept_arr(arr,5);
	reverse_arr(arr,5);	

	return 0;
}

void accept_arr(int arr[],int si){

	printf("Enter elements : \n");
	for(int i=0;i<si;i++){
		printf("element[%d] ",i);
		scanf("%d",&arr[i]);
	}
}

void reverse_arr(int arr[],int si){

	printf("Array elemets in reverse: ");
	for(int i=si-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
