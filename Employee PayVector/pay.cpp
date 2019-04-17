#include "person.cpp"
#include <iostream>
#include <fstream>
using namespace std;
int readData(vector<Person> &worker,int size);
void writeData(vector<Person> &worker,int size);
int main(){
    int size =0;
    //int maxEmployees = 20; //int size;
    vector<Person> Employees; //creates 20 employees
    readData(Employee,size);
   // Employee.fullName;
   // Employee.totalPay;
    writeData(Employee,size);

}
int readData(vector<Person> &worker,int size){ //size = number of lines
  Person Human;
  int i=0;
  string line;
  string FNAME;
  string LNAME;
  float hoursWorked;
  float totalPay;
  ifstream readingfile;
  readingfile.open("input.txt");
  if (readingfile.fail()) {
    cerr << "Error opening file" << endl;
    exit(1);
  }
  while (getline(readingfile,line)) {
     for (int i = 0; i < size; i++) {
    readingfile >> FNAME >> LNAME >> hoursWorked >> totalPay;
    Human[i].setFirstName(FNAME);
    Human[i].setLastName(LNAME);
    Human[i].setHoursWorked(hoursWorked);
    Human[i].setPayRate(totalPay);
    Worker.emplace_back(Human);
    i++;
    cout << line <<endl;
     }
}


  readingfile.close();

}
void writeData(vector<Person> &Worker,int size){
  int count;
  string line;
  string FNAME;
  string LNAME;
  int hoursWorked;
  int totalPay;
  ofstream writingfile;
  writingfile.open("output.txt");
  //getline(cin,writingfile); //prints out whole including whitespace
  for (int i = 0; i < size; i++) {
  writingfile << FNAME << LNAME << hoursWorked << totalPay<<endl;
   Human[i].setFirstName(FNAME);
   Human[i].setLastName(LNAME);
   Human[i].setHoursWorked(hoursWorked);
   Human[i].setPayRate(totalPay);
   worker.emplace_back(Human);
   count++;
   cout << count<<endl;
}
  writingfile.close();
}
/*
how to make and compile using terminal
//g++ -o pay pay.cpp
//ls
// ./pay

 */
