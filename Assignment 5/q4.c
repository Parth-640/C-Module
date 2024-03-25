#include<stdio.h>
void accept_arr(int arr[],int si);
void max(int arr[],int si);
int main(){
	int arr[5],total;
	accept_arr(arr,5);
	max(arr,5);	

	return 0;
}

void accept_arr(int arr[],int si){

	printf("Enter elements : \n");
	for(int i=0;i<si;i++){
		printf("element[%d] ",i);
		scanf("%d",&arr[i]);
	}
}

void max(int arr[],int si){
	int max = arr[0];
	for(int i=1;i<si;i++){
		if(max<arr[i])
			max=arr[i];
	}
	printf("Maximum element in array : %d \n",max);

}
