#include<iostream>
using namespace std;

struct example{
int x;
float y;
char z;
string s;
};

int main(){
 example el1;
 cout<<"\nThis is an example for a structure.\n";
 cout<<"\nEnter an integer>";
 cin>>el1.x;
 cout<<"\nEnter a float value>";
 cin>>el1.y;
 cout<<"\nEnter a character>";
 cin>>el1.z;
 cout<<"\nEnter a string>";
 cin>>el1.s;
 cout<<"\n\nThe elements of the structure are:\n";
 cout<<"\n\ninteger>"<<el1.x;
 cout<<"\n\nfloat value>"<<el1.y;
 cout<<"\n\ncharacter>"<<el1.z;
 cout<<"\n\nstring>"<<el1.s<<endl;
return 0;
}
