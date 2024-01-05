#include<stdio.h>
void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("the value of a is %d and b is %d",a,b);
}
main(){
	int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    swap(a,b);

}
