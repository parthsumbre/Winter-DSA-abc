#include<iostream>
using namespace std;
int main(){
//	int number=458;
//	int reverse=0;
//	int access=0;
//	while(number!=0){
//		access=number%10;
//		reverse=reverse*10+access;
//		
//		
//		number/=10;
//	}
//	cout<<"reversed number is: "<<reverse<<endl;





	int row=4;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
//	cout<<endl;
//	for(int i=1;i<=row;i++){
//		for(int j=row-i;j<=i;j++){
//			cout<<" *";
//		}
//		cout<<endl;
//		
//	}


	cout<<endl;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			cout<<j;
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=row;j++){
			cout<<i;
		}
		cout<<endl;
	}
	cout<<endl;
	char value='a';
	for(int i=1;i<=row;i++){
		for(int j=1;j<=i;j++){
			
			cout<<" "<<value;
			value++;
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=1;i<=row;i++){
		for(int j=row;j<=row;row--){
			cout<<"*";
		}
	}
	

	return 0;
}
