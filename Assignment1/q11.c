#include<stdio.h>
#include<limits.h>

int main(){

	printf("Data type            size  foramt specifier      range\n");
	printf("---------------------------------------------------------------\n");
	printf("Char                  %u        %%c             %d to %d\n",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("unsigned char         %u        %%c             %d to %d\n",sizeof(char),0,UCHAR_MAX);
	printf("short int             %u        %%hd            %hd to %hd\n",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("unsigned short int    %u        %%hu            %hu to %hu\n",sizeof(unsigned short int),0,USHRT_MAX);
	printf("int                   %u        %%d             %d to %d\n",sizeof(int),INT_MIN,INT_MAX);
	printf("unsigned int          %u        %%u             %u to %u\n",sizeof(unsigned int),0,UINT_MAX);
	printf("long int              %u        %%ld            %ld to %ld\n",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("unsiged long int      %u        %%lu            %lu to %lu\n",sizeof(unsigned long int),0,ULONG_MAX);

	return 0;

}
