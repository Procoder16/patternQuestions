#include<iostream>
using namespace std;

int fact(int num){
	int product=1;
	for(int i=1;i<=num;i++){
		product*=i;
	}
	return product;
}

int main(){
	int n;
	cout<<"ENTER THE NUMBER OF ROWS IN THE PASCAL TRIANGLE:";
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
		}
		cout<<endl;
	}
	return 0;
}

