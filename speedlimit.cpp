#include <iostream>
using namespace std;

int main(){
	
	int entries;
	int newMiles;
	int currMiles = 0;
	int hours;
	int oldHours = 0;
	
	while(1)
	{
	
	cin>>entries;
	if(entries == -1)
	{
	    break;
	}
	
	
	for(int i = 0; i < entries; i++)
	{
		cin>>newMiles;
		if(i == 0)
		{
			cin>>hours;
	        currMiles = newMiles * hours;
		    oldHours = hours;
	    }
		else
		{
			cin>>hours;
			currMiles += newMiles * (hours - oldHours);
		    oldHours = hours;
		}
	}
	
    cout<<currMiles<<" miles"<<endl;
    
	}

	return 0;
}