#include <iostream>

using namespace std;

void grouping ();

int main () {
   cout<<"******************** This application is for groupin the same elements together ********************\n\n";
   grouping();
   return 0;
}



void grouping () {
   cout<<"please enter the elements you want\n";
   //creating string to read the input
   string input;
   //reading the input from the user
   getline(cin, input);
   //printing first element in the string
   cout<<input[0];
   
   //loop for groupin the same elemts together
   for (int i = 1; i < input.length(); i++) {
      //the current element == the previous element
      if (input[i] == input[i - 1]) {
         cout<<input[i];
      }
      //the current element != the previous element
      else {
         cout<<"\t"<<input[i];   
      } 
   }
   cout<<endl;
}
