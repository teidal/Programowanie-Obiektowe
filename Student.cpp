#include "stdafx.h"
#include "Student.h"


void Student::set_register(int reg){
	registernmb = reg;
}
int Student::get_register(){
	return registernmb;
}

void Student::set_semester(int sem){
	semester=sem;
}
int Student::get_semester(){
	return semester;
}

void Student::set_field(char* fiel){
	strcpy(field, fiel);
}
char* Student::get_field(){
	return field;
}

void Student::set_department(char* dep){
	strcpy(department, dep);
}
char* Student::get_department(){
	return department;
}

Student::Student(int r):Human(r)
{
	set_register(12);
	set_semester(2);
	set_field("Informatyka");
	set_department("Elektroniki");
}
/*Student::Student(int r, int reg, int sem, char *fiel, char *dep):Human(r)
{
	set_register(reg);
	set_semester(sem);
	set_field(fiel);
	set_department(dep);
}*/
Student::~Student(){
	//if(wsk != 0) delete(wsk);
};