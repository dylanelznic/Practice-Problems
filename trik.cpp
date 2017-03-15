#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string moves;
	int len;
	int pos = 1;
	
	getline(cin, moves);
	len = moves.length();
	
	for(int i = 0; i < len; i++)
	{
		switch(moves[i]) {
			case 'A':
				if(pos == 1)
					pos = 2;
				else if(pos == 2)
					pos = 1;
				break;
			case 'B':
				if(pos == 2)
					pos = 3;
				else if(pos == 3)
					pos = 2;
				break;
			case 'C':
				if(pos == 1)
					pos = 3;
				else if(pos == 3)
					pos = 1;
				break;
        }
	}
	
	cout<<pos;
	
	return 0;

}