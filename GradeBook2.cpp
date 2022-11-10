#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
	public:
	
		void displayMessage(string courseName)
		{
			cout << "Welcome to the gradebook for \n" << courseName << endl;
		}
	
};

int main(){
	GradeBook myGradeBook;
	string nameOfCourse;
	
	cout << "Type the course name: \n";
	getline(cin, nameOfCourse);
	cout << endl;
	
	myGradeBook.displayMessage(nameOfCourse);
	return 0;
}

