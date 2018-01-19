#include <iostream>

using namespace std;

void insertsort(int a[], int n){
	for (int i=0; i<n; i++){
		int k = a[i];
		int j = i-1;

		while(j>=0 && a[j]>k){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=k;
	}
}

int main(){
    int n;
    cin>>n;
    int a[n];
    cout<<"Start entering array elements : "<<"\n";
    for (int i=0; i<n ;i++){
    	cin>>a[i];
    }
    cout<<"Here is your given array : \n[";
    for (int i=0; i<n ;i++){
    	cout<<a[i]<<", ";
    }
    cout<<"\b\b]\n";
    insertsort(a, n);
     for (int i=0; i<n ;i++){
    	cout<<a[i]<<", ";
    }
	return 0;
}