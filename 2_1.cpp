#include<iostream>
using namespace std;
int main(){
	int arr[10]={1,2,3,4,52,2,1,4,5,10};
	cout<<"enter number to find:";
	int find;
	cin>>find;
	int flag=0,pos;
	for(int i=0;i<10;i++){
		if(arr[i]==find){
			flag=1;
			pos=i+1;
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
