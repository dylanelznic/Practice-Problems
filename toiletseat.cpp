#include <iostream>
using namespace std;

int main(){

	string input;
	int inputLength;
	int count = 0;
	char temp;
	
	getline(cin, input);
	inputLength = input.length();

    for(int i = 1; i < 4; i++)
    {
        for(int j = 0; j < inputLength; j++)
        {
            switch(i)
            {
                case 1:
                    temp = input[0];
                    if(temp == 'U' && temp != input[1] && j == 0)
                    {
                        count += 2;
                    }
                    if(temp == 'D' && j == 1)
                    {
                        count++;
                    }
                    if(input[j] == 'D' && j > 1)
                    {
                        count += 2;
                    }
                break;
                
                case 2:
                    temp = input[0];
                    if(temp == 'D' && temp != input[1] && j == 0)
                    {
                        count += 2;
                    }
                    if(temp == 'U' && j == 1)
                    {
                        count++;
                    }
                    if(input[j] == 'U' && j > 1)
                    {
                        count += 2;
                    }
                break;
                
                case 3:
                    temp = input[j];
                    if(temp != input[j-1] && j > 0)
                    {
                        count++;
                    }
                break;
            }
        }
        
        cout<<count<<endl;
        count = 0;
    }

	return 0;
}