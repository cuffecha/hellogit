#include <iostream>
#include <string>
#include <vector>
#include "Student.h"


using namespace std;



void fillVector(const vector<Person>&);


void printVector(const vector<Person>&);{


}



int main()  {



vector<Person> myClass;

fillVector(myClass);
printVector(myClass);


return 0;
}


void fillVector(vector<Student>& newMyClass){
	
	string name;
	string grade;
	
	cout<<"How many students are in your class?"
	int classSize;
	cin >> classSize;
	
	
	for(int i = 0;i < cladsSize; i++) {
		cout << "Student Name: ";
		cin >> name;
		cout << "Student Grade: "
		cin >> grade;
		
		
		Student newStudent(name, ID_Number );
		newMyClass.push_back(newStudent);
		cout <<endl
		
		
	}
	
     cout <<endl;
	
	
}

void printVector(const vector<Student>&){
	
	unsigned int size = newMyClass.size();
	
	for (unsigned int i = 0; i < size(); i++){
		cout <<"Student Name" << myClass[i].getName() << endl;
		cout << "Student Grade" << MyClass[i].get() << endl;
		cout << endl;
 		
		
	}
}



