#include<stdio.h>
#include<math.h>

int main(){

	int a,b,c;
	float s,peri,area;
	
	a=3,b=4,c=5;

	peri = a+b+c;
	
	s = peri/2;

	area = sqrt(s * (s-a) * (s-b) * (s-c));

	printf("The side of triangle is %d %d %d\n",a,b,c);
	printf("The perimeter is %f and Area is %f\n",peri,area);

	a=1,b=2,c=3;

	peri = a+b+c;

	s= peri/2;

	area = sqrt(s * (s-a) * (s-b) * (s-c));

	printf("The side of triangle is %d %d %d\n",a,b,c);
	printf("The perimeter is %f and Area is %f\n",peri,area);

	a=1,b=2,c=4;

	peri = a+b+c;

	s= peri/2;

	area = sqrt(s * (s-a) * (s-b) * (s-c));

	printf("The side of triangle is %d %d %d\n",a,b,c);
	printf("The perimeter is %f and Area is %f\n",peri,area);


	return 0;
}
