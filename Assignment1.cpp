#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
struct  PERSON {
    char  Name[20];
    float Balance;
  };
//void printarray(PERSON my array[],int size);
int CounttheRecords(int count);
void display(PERSON Human[],int count);
void FindRichest(PERSON Human[],int count);
float Deposit(PERSON Human[], float amount,int size);
void NewCopy(string outfile,PERSON Human[], int count);
int main(){
  ifstream readingFile;
  readingFile.open("data.txt");
  int numberofrecords = 0;
  CounttheRecords(numberofrecords);
  PERSON Human[numberofrecords]; //declaring struct
  display(Human,numberofrecords);
  float pay;
  string firstName;
  string lastName;
  string fullName = firstName + " "+lastName;
  strcpy(Human[numberofrecords].Name,fullName.c_str());
  readingFile.close();
  ofstream writingFile;
  writingFile.open("Newbalance.txt");
    display(Human,numberofrecords);
    FindRichest(Human,numberofrecords);
    Deposit(Human,pay,numberofrecords);
    NewCopy(writingFile,Human,numberofrecords);
    writingFile.close();
  return 0;
}

int CounttheRecords(int count){
  ifstream myFile;
  myFile.open("data.txt");
  string line;
  while (getline(myFile,line)) {
    count++;
  }
  myFile.close();
}
void display(PERSON Human[],int count){
  for(int i= 0; i< count; i++){
    cout << Human[i].Name << Human[i].Balance <<endl;
  }

}
void FindRichest(PERSON Human[],int count){
  int Richest = Human[0].Balance; //initialize Richest element
  int index;
  for(int i = 0; i < count; i++){
    if(Human[i].Balance > Richest){
      Richest = Human[i].Balance;
      index = i;
      }
    cout << "The richest person is " << Human[index].Name;
  }
}
float Deposit(PERSON Human[], int count){
for (int i = 0; i < count; i++) {

 cout << "Type out your name ";
 cin >>  Human[i].Name;
 cout << "Deposit Amount is"<<endl;
 cout << Human[i].Balance;
 float deposit; //deposit money
 cin >> deposit;
 float total[i]; //new total of money
 total[i] = Human[i].Balance + deposit;
 cout << "Your new total is " << total[i] << endl;
}
}
void NewCopy(string outfile,PERSON Human[], int count){
  outfile.write("Newbalance.txt");
  for (int i = 0; i < count; i++) {
    outfile << Human[i].name << Human[i].balance << endl;
  }
  outfile.close();
}
/*
how to make and compile using terminal
//g++ -o Assignment1 Assignment1.cpp
//ls
// ./Assignment1

 */
