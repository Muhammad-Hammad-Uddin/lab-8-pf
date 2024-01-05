#include<stdio.h>
int decide_car_usage(int a, int b)
{
	if(a%2==0&&b%2==0){
		return 1;
	}
	else if(a%2==1&&b%2==1){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){

	int a;int b;
        printf("enter numeric part of car: \n");
        scanf("%d",&a);
        printf("enter a day from(1 to 7): \n");
        scanf("%d",&b);
        printf("%d",decide_car_usage(a,b));
        
}
