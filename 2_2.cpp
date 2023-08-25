#include<iostream>
using namespace std;
int main(){
	int arr[10]={1,2,3,4,52,2,1,4,5,10};
	cout<<"enter number to find:";
	int find;
	cin>>find;
	int start=0;
	int end=9;
	int mid;
	int flag=0,pos;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(find>arr[mid]){
			start=mid+1;
		}
		else if(find<arr[mid]){
			end=mid-1;
		}
		else{
		flag=1;
		pos=mid+1;
		break;	
		}
	}
	

	if(flag==1){
		cout<<"element found at position:"<<pos;
		
	}
	else{
		cout<<"element not found";
	}
		
}
