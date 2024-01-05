#include<stdio.h>
#include<string.h>
main(){
	int x,y;
	char password1[100];
	char password2[]="Secure123";
	printf("input password:");
	gets(password1);
	x=strlen(password1);
	y=strcmp(password1,password2);
	if(x>=8&&y==0){
		printf("Login successful.Welcome!");
	}
	else if(x>=8)
	printf("valid entry");
	else
	printf("invalid entry");
}
