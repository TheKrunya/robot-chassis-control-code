#include <iostream> 
#include <windows.h>
#include <conio.h>
using namespace std;

class Calc
{
	public:
		void forward(int i)
		{
			cout << "forward" << endl;
		}
		void backward(int i)
		{
			cout << "backward" << endl;
		}
		void turnRight(int i)
		{
			cout << "turnRight"<<endl;
		}
		void turnLeft(int i)
		{
			cout << "turnLeft" << endl;
		}
};

int main()
{
	int enteredCommand;
	Calc Robot;
	while (true)
	{

			
			
		enteredCommand = _getch();
		if (enteredCommand == 119)
		{
			Robot.forward(255);
		}
		else if (enteredCommand == 115)
		{
			Robot.backward(255);
		}
		else if (enteredCommand == 97)
		{
			Robot.turnLeft(255);
		}
		else if (enteredCommand == 100)
		{
			Robot.turnRight(255);
		}
	}
	return 0;
}
