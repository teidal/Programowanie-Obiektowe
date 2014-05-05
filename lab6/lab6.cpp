// lab6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Mammal.h"
#include "Human.h"
#include "Student.h"
#include "Student2.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Human person1;
Student student1(2,2),student2;
Student2 student3;

std::cout << student1;

if (student1 == student2) std::cout << "Uczniowie identyczni";
else std::cout << "Uczniowie rozni";
	return 0;
}

