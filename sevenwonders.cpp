#include <iostream>
#include <string>
using namespace std;

int main(){

	int tablet = 0;
	int compass = 0;
	int gear = 0;
	string input;
	int length;
	int score;
	
	getline(cin, input);
	length = input.length();
	
	for(int i = 0; i < length; i++)
	{
		switch(input[i])
		{
			case 'T':
				tablet++;
				break;
			case 'C':
				compass++;
				break;
			case 'G':
				gear++;
				break;
		}
	}
	
	score = (tablet * tablet) + (compass * compass) + (gear * gear);
	
	while(tablet != 0 && compass != 0 && gear != 0)
	{
		score += 7;
		tablet--;
		compass--;
		gear--;
	}

	cout<<score;
	
	return 0;
}