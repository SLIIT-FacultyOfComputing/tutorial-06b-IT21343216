#include "Student.h"
#include <iostream>
#include<cstring>

// Assign studentId and name
void Student::assignDetails(int SID, const char Sname[]) {
  studentId=SID;
  strcpy(name,Sname);
}

// Display StudentId and Name
void Student::display() {
  std::cout<<"Student id : "<<studentId<<std::endl;
  std::cout<<"Student name : "<<name<<std::endl;
}
