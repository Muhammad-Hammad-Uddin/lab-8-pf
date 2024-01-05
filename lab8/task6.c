#include<stdio.h>

void array(int arr[],int a)
{
	//34,32,31
	int sum,max,min,i;
	max=arr[0];//34
	min=arr[0];//34
	for(i=1;i<a;i++){
		
		sum+=arr[i];
		if(arr[i]> max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];	
	
	}
		printf("maximum :%d\n minimum :%d\n sum :%d\n",max,min,sum);

}

int main(){
	int i,a;
	printf("enter size of an array");
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		printf("enter elements %d : \n",i+1);
		scanf("%d",&arr[i]);
	}
	array(arr,a);
	
	
}
