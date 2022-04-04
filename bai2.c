#include<stdio.h>

int printfarray(int arr[],int size)
{
	int i;
	for(i=size-1;i>=0;i--){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int i;
	int arr[10];
 printf("Nhap vao 10 phan tu trong mang\n");
for(i=0;i<10;i++){
	printf("Phan tu thu %d\t",i+1);
	scanf("%d",&arr[i]);
}
printfarray(arr,10);
}

		

