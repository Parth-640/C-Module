#include<stdio.h>
void accept_arr(int arr[],int si);
void total_avg(int arr[],int si);
int main(){
	int arr[5],total;
	accept_arr(arr,5);
	total_avg(arr,5);	

	return 0;
}

void accept_arr(int arr[],int si){

	printf("Enter five subject marks : \n");
	for(int i=0;i<si;i++){
		printf("Subject[%d] ",i);
		scanf("%d",&arr[i]);
	}
}

void total_avg(int arr[],int si){

	int sum=0,avg;
	for(int i=0;i<si;i++){
		sum = sum + arr[i];
	}
	avg = sum/5;
	printf("Total = %d \n",sum);
	printf("Avg = %d \n",avg);

}
