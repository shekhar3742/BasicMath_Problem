#include<bits/stdc++.h>
using namespace std;

int countDigit(int N){
	int count = 0;
	while(N>0){
		count++;
		N = N/10;
	}
	return count;
}

int main(){
	int N;
	cin>>N;
	cout<<countDigit(N);
}
