#include <iostream>
#include <string>

using namespace std;

class GradeBook
{	
	public:
		GradeBook(string name){
			setCourseName(name);
		}
		
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
	GradeBook myGradeBook1("Math 101");
	GradeBook myGradeBook2("Science 101");
	
	cout << "GradeBook 1 created for course " << myGradeBook1.getCourseName() << endl;
	cout << "GradeBook 2 created for course " << myGradeBook2.getCourseName() << endl;

	return 0;
}

