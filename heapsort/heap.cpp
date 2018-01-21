#include <iostream>
using namespace std;
class heap
{
    int next;
    int n;
    int q[1000];
public:
	heap(){
		cout<<"heap sorting begins :\n";
		next = 0;
		};
	bool add(int v);
	int remove();
	void show();
	void bubbleup();
	
private:
	int p(int i){return (i-1)/2;}
	int l(int i){return (2*i+1);}
	int r(int i){return (2*i+2);}
};

bool heap::add(int v){
		q[next] = v;
		bubbleup();
		next++;
	return true;
}

void heap::bubbleup(){
	//add new element while maintaining the heap fashion
	
	int i = next;
	while(i>=0 && q[p(i)]>q[i])
	{
		int temp = q[p(i)];
		q[p(i)] = q[i];
		q[i] = temp;

		i = p(i);	
	}
}

int heap::remove(){
	return 0;
}

void heap::show(){
	cout<<"Here is your min heaped array : [";
		for (int i = 0; i < next; ++i) {
				cout<<q[i]<<", ";
			}
	cout<<"\b\b]\n";
}

int main (){
	heap ar;
	cout<<"Start entering, hit any character if wanna exit : \n";
	while(1)
	{
    	int i; cin>>i;
    	if (i==0) break;
    	ar.add(i);
    }
	ar.show();
	return 0;
}