//Arthur Salazar
// Section 2
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct PERSON
{
char Name[20];
float Balance;
};

void printmenu();
int countRecords(int &count);
void display(PERSON [], int&count);
void buildPerson(PERSON [], int&count);
PERSON * readData(int N);
void findRichest(PERSON [], int&count);
void deposit(char[], PERSON, int&count);
void NewCopy(string outfile,PERSON Human[], int count);

int main()
{
  int choice;
  int numberOfRecords = 0;
  countRecords(numberOfRecords);
  PERSON person[numberOfRecords];
  buildPerson(person, numberOfRecords);
    do
    {
        printmenu();
        cin >> choice;
        switch(choice)
        {
            case 1:
                // Act on display
                PERSON * readData(int N)
                break;

            case 2:
                // Act on deposit
                void Deposit(PERSON Human[], float amount,int size)
                break;

            case 3:
                // Act highest balance
                void findRichest(PERSON myarray[], int &count)
                break;

            case 4:
                // Act on update records
                void NewCopy(string outfile,PERSON Human[], int count);
                break;

            case 5:
                // Must call update records here before exiting the program
                void NewCopy(string outfile,PERSON Human[], int count);
                break;

            default:
                cout << "Invalid entry" << endl;
                break;
        }
        cout << endl;
   } while(choice != 5);
      return 0;




  return 0;
}
void printmenu() {
    cout << "Please enter a choice:" << endl;
    cout << "1. Display records"<< endl;
    cout << "2. Deposit funds"<< endl;
    cout << "3. Find Highest Balance" << endl;
    cout << "4. Update records" << endl;
    cout << "5. Exit the program" << endl;
}
int countRecords(int &count)
{
ifstream myfile;
myfile.open("data.txt");
string line;
while(getline(myfile, line))
{
  count ++;
}
myfile.close();
}

void buildPerson(PERSON myArray[], int &count)
{
  float pay;
  string firstName;
  string lastName;
  string fullName;

  ifstream myfile("data.txt");

  for(int i = 0; i < count; i++)
  {
    myfile >> firstName >> lastName >> pay;
    fullName = firstName + " " + lastName;
    myArray[i].Balance = pay;
    strcpy(myArray[i].Name, fullName.c_str());

  }
  myfile.close();
}

void display(PERSON myarray[], int& count )
{
  for(int i = 0; i < count; i++)
  {
    cout << myarray[i].Name << " " << myarray[i].Balance << endl;
  }
}
PERSON * readData(int N){
 string firstName,lastName;
 float balance;
  PERSON * personptr;
  personptr = new PERSON [N];
  // countRecords(int &count);
  ifstream Data;
  Data.open("data.txt");
  while(Data){
  Data >> firstName >> lastName >> balance;
    cout << firstName << lastName << balance;
}

 return personptr;
}

void findRichest(PERSON myarray[], int &count)
{
  float richest = 0;
  for(int i = 0; i < count; i++)
  {
    if(myarray[i].Balance > richest)
    {
      richest = myarray[i].Balance;
    }
  }

  for(int i = 0; i < count; i++)
  {
    if(richest == myarray[i].Balance)
    {
      cout << "The customer with max balance is: " <<
      myarray[i].Name << endl;
    }
  }
}

//
float Deposit(PERSON Human[],char custName[], int count){
for (int i = 0; i < count; i++) {

 cout << "Type out your name ";
 cin >>  Human[i].Name;
 cout << "Deposit Amount is"<<endl;
 cout << Human[i].Balance;
 float deposit; //deposit money
 cin >> deposit;
 int total[i]; //new total of money
 total[i] = Human[i].Balance + deposit;
 cout << "Your new total is " << total[i] << endl;
total << endl;
}
void NewCopy(string outfile,PERSON Human[], int count){
  string firstName,lastName;
  float balance;
  outfile.write("Newbalance.txt");
  for (int i = 0; i < count; i++) {
    outfile >> firstName >> lastName >> balance;
  }
  outfile.close();
}
/*
how to make and compile using terminal
//g++ -o balance balance.cpp
//ls
// ./balance
 */
