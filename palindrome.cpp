#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
	int original = n ;
	int ls;
	int reverse=0;
	while(n>0){
		ls = n % 10;
		reverse = (reverse*10)+ls;
		n = n/10;
	}
	return original == reverse ;
	
}

int main(){
	int n;
	cout<<"Enter number ";
	cin>>n;
	if(palindrome(n)){
		cout<<n<<" is palindrome";
	}
	else{
			cout<<n<<" is not palindrome";	
	}
	return 0;
}
