#include <iostream>
using namespace std;

int main(){
	int index;
	cin>>index;
	
	int temp;
	int count = 0;
	
	for(int i = 0; i < index; i++)
	{
		cin>>temp;
		if(temp < 0)
			count++;
	}
	
	cout<<count;
	
	return 0;
}