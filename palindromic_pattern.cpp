#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"ENTER THE SIZE OF THE PATTERN:\n";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<"  ";
		}
		for(int j=i;j>1;j--){
			cout<<j<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
