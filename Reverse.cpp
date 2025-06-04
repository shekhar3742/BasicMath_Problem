#include<bits/stdc++.h>
using namespace std;

int reverseDigit(int n){
	int ls ;
	int reverse=0; 
	while(n>0){
		ls= n%10;
		reverse = (reverse * 10) + ls;
		n = n/10;
	}
	return reverse;
}


int main(){
	int n;
	cout<<"Enter number n : "<<endl;
	cin>>n;
	cout<<reverseDigit(n);
}
