#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
	public:
		void setCourseName(string name){
			courseName = name;
		}
		
		string getCourseName(){
			return courseName;
		}
		
		void displayMessage()
		{
			cout << "Welcome to the gradebook for \n" << getCourseName() << "!" << endl;
		}
	
	private:
		string courseName;
};

int main(){
	GradeBook myGradeBook;
	string nameOfCourse;
	
	cout << "The initial course name is: " << myGradeBook.getCourseName();
	
	cout << "Type the course name: \n";
	getline(cin, nameOfCourse);
	cout << endl;
	
	myGradeBook.setCourseName(nameOfCourse);
	
	myGradeBook.displayMessage();
	return 0;
}

