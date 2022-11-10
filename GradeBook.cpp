#include <iostream>

using namespace std;

class GradeBook
{
	public:
	
		void displayMessage()
		{
			cout << "Welcome to my gradebook" << endl;
		}
	
};

int main(){
	GradeBook myGradeBook;
	myGradeBook.displayMessage();
	return 0;
}

