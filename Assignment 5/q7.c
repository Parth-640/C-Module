#include<stdio.h>
void accept_arr(int arr[],int si);
void print_arr(int arr[],int si);
void selection_sort(int arr[],int si);
int main(){
	int arr[5],total;
	accept_arr(arr,5);
	selection_sort(arr,5);
	print_arr(arr,5);	

	return 0;
}

void accept_arr(int arr[],int si){

	printf("Enter elements : \n");
	for(int i=0;i<si;i++){
		printf("element[%d] ",i);
		scanf("%d",&arr[i]);
	}
}

void print_arr(int arr[],int si){
	printf("Array elemets : ");
	for(int i=0;i<si;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}	

void selection_sort(int arr[],int si){

	for(int i=0;i<si;i++){
		for(int j=i+1;j<si;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
