#include <iostream>

using namespace std;

void queen(int n){
	int q[n];
	for(int i=0;i<3;i++){
		q[0]=i;
		for (int j=0;j<3;j++){
			q[1]=j;
			for (int k=0;k<3;k++){
				q[2]=k;
				cout<<q[0]<<q[1]<<q[2]<<"\n";
			}
		}
	}
}

int main(){
    int n;
    cout<<"Enter the chessboard size  :  ";
    cin>>n;
	queen(n);
	return 0;
}