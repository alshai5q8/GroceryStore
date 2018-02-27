//author: Saleh Alshaikh
#include<iostream>
#include<string>
using namespace std;

const int LIST_SIZE = 5;

int main()
{
  string list[LIST_SIZE]; //array of 5 strings
  int numItems = 0;
  char input;
  string itemName;
   
do
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(( input == 'a' ) || ( input == 'A'))

{

cout<<"What is the item?\n";
cin>>itemName;


if ( numItems >= LIST_SIZE )
{

cout<< "You'll need a bigger list!\n";
}
else if (numItems < LIST_SIZE)
{

list[numItems] = itemName;
numItems ++;
}
}
}


while(( input != 'q' ) && ( input != 'Q' ));

cout<<"==ITEMS TO BUY=="<<endl;

for(int index = 0; index < LIST_SIZE; index++)
{
cout<<(index + 1);
cout<<" " <<list[index]<<endl;
}



  return 0;
}
