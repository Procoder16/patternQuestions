#include<iostream>
using namespace std;

int main (){
	int n;
	cout<<"ENTER THE LENGTH OF THE PATTERN:\n";
	cin>>n;
	
	for(int i=n;i>=1;i--){
		int k=1;
		for(int j=1;j<=i;j++){
			cout<<k++<<" ";
		}
		cout<<endl;
	}
	return 0;
}
