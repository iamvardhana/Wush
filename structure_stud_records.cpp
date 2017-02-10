#include<iostream>
using namespace std;
struct stud{
int rollno;
string name;
float perc;
};

int main()
{
stud s[10];
int n,i;
cout<<"\nEnter no. of students>";
cin>>n;
//taking in user input
cout<<"\nEnter details>\n";
for(i=0;i<n;i++){
cout<<"\nStudent "<<i+1;
cout<<"roll no>";
cin>>s[i].rollno;
cout<<"name>";
cin>>s[i].name;
cout<<"percentage>";
cin<<s[i].perc;
}

///displaying output

return 0;
}
