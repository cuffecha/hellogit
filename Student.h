//Header file//

#ifndef STUDENT_H
#define STUDNET_H


#include <iostream>
#include <string>

using namespace std;


class Person {
	
	public:
		//Default Constructor
		Person();
		
		//Overloaded Constructor
		Person(string, char);
		
		//Destructor
		~Person();
		
		//Accesor functions
		string getName() const;
				
				
		char getGrade() const;
				
			
			//Mutator Functions
		    void setName(string);
		    
		    
		    
		    void setNumber(string);
		    //setGrade
		    //@param char - grade of student
    private:
    	
    //Member functions//
    
    string newName;
    string ID;
	
	
	
	
};

#endif
