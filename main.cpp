//author: Saleh Alshaikh
#include<iostream>
#include<string>
#include<vector>
using namespace std;



int main()
{
  vector <string> numItems;
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
numItems.push_back(itemName);
}




}while(( input != 'q' ) && ( input != 'Q' ));

if (numItems.size() > 0)
{
cout<<"==ITEMS TO BUY=="<<endl;

for(int index = 0; index < numItems.size(); index++)
{
cout<<(index + 1);
cout<<" " <<numItems[index]<<endl;
}
}
else 
{
cout<<"No Items to buy!"<<endl;
}


  return 0;
}
