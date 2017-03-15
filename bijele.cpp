#include <iostream>
using namespace std;

int main(){
	int piece;
	int set[6];
	
	cin>>piece;
	set[0] = 1-piece;

	cin>>piece;
	set[1] = 1-piece;
	
	cin>>piece;
	set[2] = 2-piece;
	
	cin>>piece;
	set[3] = 2-piece;
	
	cin>>piece;
	set[4] = 2-piece;
	
	cin>>piece;
	set[5] = 8-piece;
	
	for(int i = 0; i < 6; i++)
	{
		cout<<set[i];
		if(i != 5)
			cout<<" ";
	}
	
	return 0;
}