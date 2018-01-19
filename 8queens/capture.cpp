#include <iostream>
// #include <capture.h>
using namespace std;

bool iscapture(int q[], int n){
for (int i=0; i<n; i++){
	for (int j=i+1; j<n; j++){
		if (q[i]==q[j] || (q[i]-q[j]==i-j) || q[i]-q[j]==j-i) return true;
		}
	}
return false;
}

int main(){
	int a[4]={1,3,12,9};
	cout<< iscapture(a,4);
	return 0;
}