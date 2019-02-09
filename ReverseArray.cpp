//test.cpp
#include<iostream>

using namespace std;
void ReverseArray(int arr[],int start,int end){ //takes in 3 parameters array, and two integers
  while (start < end) //loop iterates as longs as start isn't equal to end
    {
        int temp = arr[start];  //set every element to temp
        arr[start] = arr[end];  //positon at start = position at end
        arr[end] = temp;  //set every element at end
        start++; //increase from start
        end--; // decrease from end
    }
}
void PrintArray(int arr[],int size){ //takes in two parameters integer array,integer
  for (int i =0; i< size; i++) {
    cout << arr[i] << " ";
    cout << endl; //prints out each element in its own line
  }
}


int main(){
  cout << "Hello World" << endl;
  int arr[]={1, 2, 3, 4, 5, 6};
  cout << "Size of array: " <<endl;
  PrintArray(arr,6); //calls out function PrintArray
  cout << "If the array is reversed it would be: "<<endl;
  ReverseArray(arr,0,5); //calls out function
  PrintArray(arr,6); //prints ReverseArray
  system("pause"); //used for visual Studio Testing
  return 0;
}
/*
how to make and compile using terminal
//g++ -o ReverseArray ReverseArray.cpp
//ls
// ./ReverseArray

 */
