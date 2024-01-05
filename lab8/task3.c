#include<stdio.h>
int main(){
	int count=0,i;
	char text[50];
	char search;
	printf("enter Text\n");
	gets(text);
	printf("enter character");
	scanf("%c",&search);
	for(i=0;i<50;i++){
		if(text[i]==search){
			count++;
		}
		
	}
		printf("Total occurence of character %c is %d:\n",search,count);
	
	
	
}
