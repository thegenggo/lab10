#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

char turnCard(int x)
{
	return 
}

string grade(int x)
{
	if (x == 0) return "A";
	else if (x == 1) return "B+";
	else if (x == 2) return "B";
	else if (x == 3) return "C+";
	else if (x == 4) return "C";
	else if (x == 5) return "D+";
	else if (x == 6) return "D";
	else if (x == 7) return "F";
	else return "W";
}

int main()
{
	int x = 0;
	srand(time(0));
	cout << "Press Enter 3 times to reveal your future.";
	for (int i = 0; i < 3; i++)
	{
		cin.get();
	}
	x = rand() % 9 + 0;
	cout << "You will get " << grade(x) <<" in this 261102.";
	return 0;
}