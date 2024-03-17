#include<stdio.h>
int main(){

	float cel,far=95.0f;
	
	cel = (far - 32) * 5/9;

	printf("Fahrenheit = %f so Celsius = %f\n",far,cel);
	
	far = (cel *9/5) + 32;

	printf("Celsius = %f so Farhrenheit = %f\n",cel,far);
	return 0;
}
