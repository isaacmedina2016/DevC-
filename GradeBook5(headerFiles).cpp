#include<iostream>
#include<string>
#include "GradeBook.h"

using namespace std;

int main(){
	
	GradeBook myGradeBook1("How to be happy 101");
	GradeBook myGradeBook2("How to be yours 1001");
	
	cout << "The 1st gradebook is " << myGradeBook1.getCourseName();
	cout << "\nThe 2nd gradebook is " << myGradeBook2.getCourseName();

	return 0;
}

