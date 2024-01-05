#include<stdio.h>
void calculateDiscount(int a,int b)
{
	int value_after_discount=0;
	float discount = b;
	if(a>=50&&b>10){
		
		discount=a*0.15;
		value_after_discount=a*0.85;

	}
	else if(a>=30&&b>5){
		discount=a*0.1;
		value_after_discount=a*0.9;
	}
    else{
    	discount=0;
    	value_after_discount=a;
		}
	printf(" discount given is %.2f\n value after discount is %d",discount,value_after_discount);
}
int main(){
	int a,b;
	printf("enter total purchase amount:\n");
	scanf("%d",&a);
	printf("enter number of times you have visited:\n");
	scanf("%d",&b);
	calculateDiscount(a,b);
	
}
