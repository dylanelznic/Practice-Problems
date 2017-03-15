#include <iostream>
using namespace std;

int main(){

	int inHours;
	int inMinutes;
	int outHours;
	int outMinutes;
	int calc;
	
	cin>>inHours;
	cin>>inMinutes;
	
	if(inMinutes < 45)
	{
		calc = 45 - inMinutes;
		outMinutes = 60-calc;
		
		if(inHours == 0)
		{
			outHours = 23;
		}
		else
		{
			outHours = inHours - 1;
		}
	}
	else
	{
		outMinutes = inMinutes - 45;
		outHours = inHours;
	}	
	
	cout<<outHours<<" "<<outMinutes;
		
	return 0;
}