#include <iostream>
using std::cout;
using std::cin;
using std::endl;



int main()
{
	int answer = 7;
	int number;
	bool notguessed = true;
	while (notguessed) 
	{
		cout << " Hi Welcome To The Guessing Game " << endl;
		cout << " Please Guess The Number ";
		cin >> number;

		if (number == answer)
		{
			cout << "YOU GUESSED RIGHT!!!!!";
			notguessed = false;
		}

		if (number < answer)
		{
			cout << "you guessed to low" << endl;
			cout << " Please Guess The Number ";
			cin >> number;
		}

		if (number > answer)
		{
			cout << "you guessed to high" << endl;
			cout << " Please Guess The Number ";
			cin >> number;
		}		
	
	}
	return 0;
}
		