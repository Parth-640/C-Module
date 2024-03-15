#include<stdio.h>
int main(){
	char ch;
	int asc;
	printf("enter the char : ");
	scanf("%c",&ch);
	printf("Enter the ASCII value : ");
	scanf("%d",&asc);
	printf("%c in decimal %d\n",ch,ch);

	printf("%c in octal %o\n",ch,ch);

	printf("%c in hexadecimal %x\n",ch,ch);

	printf("%d in char %c\n",asc,asc);
}
