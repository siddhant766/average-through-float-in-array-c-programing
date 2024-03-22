#include<stdio.h>
int main(){
	int i,n;
	float a[5],sum=0.0,avg;
	printf("Enter the no. of elements \n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("the average of the sum of array is \n");
	
		printf("%.2f",avg);
	
	return 0;
}
