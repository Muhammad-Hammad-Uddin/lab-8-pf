#include<stdio.h>
int c,sub,div,mult,sum;
int calc(int a,int b)
{
printf("enter an operator");
scanf(" %c",&c);

switch(c){
	
	case '+':
		sum=a+b;
		return sum;
	case '-':
		sub=a-b;
		return sub;
	case '/':
		div=a/b;
		return div;
	case '*':
		mult=a*b;
		return div;
}

}
int main(){
	int a,b;
	printf("enter 1st number:\n");
	scanf("%d",&a);
	printf("enter 2nd number:\n");
	scanf("%d",&b);
	int d= calc(a,b);
	printf("%d",d);
	
}
