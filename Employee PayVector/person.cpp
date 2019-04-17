#include "person.h"
#include <iostream>
#include <string>
using namespace std;

Person(string firstName, string lastName, float  payRate, float
hoursWorked)
{
 firstName = fName;
 lastName = lName;
 payRate = rate;
 hoursWorked = hours;
}
void Person::setLastName(string lName)
{
 lastName = lName;
}
string Person::getLastName(){
  return lastName;
}
void Person::setFirstName(string fName){
 firstName = fName;
}
string Person::getFirstName(){
  return firstName;
}
void Person::setPayRate(float rate){
 payRate = rate;
}
float Person::getPayRate(){
  return payRate;
}
void Person::setHoursWorked(float hours){
 hoursWorked = hours;
}
float Person::getHoursWorked(){
  return hoursWorked;
}
float Person::totalPay(){
  float total;
  total= payRate * hoursWorked;
  return total;
}
string Person::fullName(){
  string fullname;
  fullname = firstName +" " +lastName;
  return fullname;
}
