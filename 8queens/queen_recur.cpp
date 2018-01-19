#include <iostream>

using namespace std;

bool iscapture(int q[], int n){
for (int i=0; i<n; i++){
	for (int j=i+1; j<n; j++){
		if (q[i]==q[j] || (q[i]-q[j]==i-j) || q[i]-q[j]==j-i) return true;
		}
	}
return false;
}

int queen_recur(int q[], int n, int k){
	//Base case 
	if (k==n){
		if (!iscapture(q, n)) {
			for(int z = 0; z<n; z++){
				cout<<q[z]<<" ";}
				cout<<"\n";
				return 0;
			}
		else return 1;
	}
		

	// recursion body

	for (int i=0; i<n; i++){
		q[k]=i;
		queen_recur(q, n, k+1);
	}
}

int main(){
	//calling the recursive function
    int n;
    cout<<"Enter the chessboard size  :  ";
    cin>>n;
	int q[n];
	queen_recur(q, n, 0);	
	return 0;
}