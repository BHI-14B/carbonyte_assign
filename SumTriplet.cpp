#include <iostream>
#include<algorithm>
using namespace std;

void find3Numbers(int arr[],int size,int sum)
{
	sort(arr,arr+size);
    for(int i=0;i<(size-2);i++)
    {
    	int j=i+1,k=size-1;
    	if((arr[k]+arr[j])<(sum)-arr[i])
    	{
    		for(int a=j;a<k;a++)
    		{
    			if((arr[i]+arr[a]+arr[k])==sum)
    			{
    				cout<<"triplets are : "<<arr[i]<<"	"<<arr[a]<<"	"<<arr[k];
    				return ;
				}
    			
			}
		}
		else
		{
			for(int a=k;a>j;a--)
    		{
    			if((arr[i]+arr[j]+arr[a])==sum)
    			{
    				cout<<"triplets are : "<<arr[i]<<"	"<<arr[j]<<"	"<<arr[a];
    				return ;
				}
    			
			}
		}
    	
	}
	cout<<endl<<"triplet not found !!";
    return ;
}
int main()
{
	int arr[]={12, 3, 4, 1, 6, 9};
    int sum=24;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 	find3Numbers(arr,arr_size,sum);
}
