#include<iostream>
using namespace std;
struct example
{ int x;
  float y;
  char z; 
  string s;
};
int main()
{ example el1;
  cout<<"\nThis is an example for a structure\n";
  cout<<"\nEnter an integer\n";
  cin>>el1.x;
  cout<<"\nEnter a float value\n";
  cin>>el1.y;
  cout<<"\nEnter a character\n";
  cin>>el1.z;
  cout<<"\nEnter a string\n";
  cin>>el1.s;
  cout<<"\n\nThe elements of the structure are:\n";
  cout<<"\nInteger value : "<<el1.x;
  cout<<"\nFloat value : "<<el1.y;
  cout<<"\nCharacter value : "<<el1.z;
  cout<<"\nString value : "<<el1.s;
 return 0;
}
