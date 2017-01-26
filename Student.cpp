#include "Student.h"

Person::Person(){
	
	newGrade = ' ';
}

Student::Student(string name, char grade){
	
	newName = name;
	newGrade = grade;
}

Student::~Student() {
}

string Student::getName() const {
	return newName;
	
}

char Student::getGrade() const {
	
	return newGrade;

}

Person::setName(string name) {
	newName = name;

	
	
}

void Student::setGrade(string number) {
	newGrade = grade;
	
}
