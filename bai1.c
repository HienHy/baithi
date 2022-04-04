#include<stdio.h>
int sum(int a,int b){
	return(a+b);
}
int sub(int a,int b){
	return(a-b);
}
int multi(int a,int b){
	return(a*b);
}
double div(int a,int b){
	if(b==0){
		return 0;}
	return (float)a/b;
}

int main(){
	int op;
	int d,f,i;
	printf("\tCalculate\n\t===============\n");
	printf("\t1. Input Number\n");
	printf("\t2. Calculate Sum\n");
	printf("\t3. Calculate Substraction\n");
	printf("\t4. Calculate Multiplication\n");
	printf("\t5. Calculate Division\n");
	printf("\t6. Exit\t\n");
for(i=0;i<100000,op<6;i++){
	printf("\tLua chon cua ban :");
	fflush(stdin);
    scanf("%d",&op);
switch(op)
	   {
	    case 1:
		   printf("Input Number 1 : \n");
		    scanf("%d",&d);
		   printf("Input Number 2 : \n");
		   scanf("%d",&f);
		   break;
	    case 2:
		   printf("sum = %d\n",sum(d,f));
	       break;
	    case 3:
	       printf("sub = %d\n",sub(d,f));
		   break;
	    case 4:
		   printf("multi = %d\n",multi(d,f));
		   break;
	    case 5: 
		    if(f==0){
			   printf("khong hop le kiem tra so da nhap va vui long nhap lai\n");
			  }
		   	else 
	        	printf("div = %.1f\n",div(d,f));
		    break;
		case 6:
			printf("\tExit");
			break;
	   }
	}	      
}
