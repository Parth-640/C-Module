#include<stdio.h>
void accept_arr(int arr[],int si);
void max_min(int arr[],int si);
int main(){
	int arr[5],total;
	accept_arr(arr,5);
	max_min(arr,5);	

	return 0;
}

void accept_arr(int arr[],int si){

	printf("Enter elements : \n");
	for(int i=0;i<si;i++){
		printf("element[%d] ",i);
		scanf("%d",&arr[i]);
	}
}

void max_min(int arr[],int si){
	int max = arr[0];
	int min = arr[0];
	for(int i=1;i<si;i++){
		if(max<arr[i])
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}
	printf("In array element min = %d and max = %d\n",min,max);

}
