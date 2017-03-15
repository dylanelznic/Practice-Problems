#include <iostream>
using namespace std;

int main(){

	int entries;
	int input;
	
	cin>>entries;
	
	for(int i = 0; i < entries; i++)
	{
		cin>>input;
		if(input % 2 == 0)
		{
			cout<<input<<" is even"<<endl;
		}
		else
		{
			cout<<input<<" is odd"<<endl;
		}
	}
	return 0;
}