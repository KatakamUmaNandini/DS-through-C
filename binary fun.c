#include<stdio.h>
int binary(int n,int *a,int low,int high,int se)
{
	
	while(low<=high){
	int mid=(low+high)/2;
	if(se==a[mid]) return mid;
	if(se>a[mid]) low=mid+1;
	if(se<a[mid]) high=mid-1;
}
return -1;
}
int main()
{
	int n=5,se=10,u;
	int a[5]={10,20,30,40,50};
	int i,low=0,high=n-1;
	u=binary(n,a,low,high,se);
	if(u==-1) printf("element not found");
	else printf("element is found at %d",u);
}
