#include <stdio.h>
void LSearch(int A[],int n,int k)
{
   int i,p=0;
   for(i=0;i<n;i++)
   {
	if(A[i]==k)
	{
	p=1;
	break;
	}	  
   }
if(p==1){
printf("Element found at %d position.",i+1);
}
else{
printf("Element Not Found \n");
}
}


void main()
{
   int A[20],n,k,i;
   printf("Enter range :");
   scanf("%d",&n);
   printf("\n Enter array elements\n ");
   for(i=0;i<n;i++)
       scanf("%d",&A[i]);
   printf("\n Enter no to search :");
   scanf("%d",&k);
   LSearch(A,n,k);
}
