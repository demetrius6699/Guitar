#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

unsigned int score;


cout<< "Please enter the exam score"<<endl;
cin>> score;

if(score>=80&&score<=100)
{
	cout<<"You had an A";
	
}
else if(score>=75&&score<=79)
{
	cout<<"You had a B+";
	
}
else if(score>=70&&score<=74)
{
	cout<<"You had a B";
	
}
else if(score>=65&&score<=69)
{
	cout<<"You had a C+" ;
	
}
else if(score>=60&&score<=64)
{
	cout<<"You had a C" ;
}
else if(score>=55&&score<=59)
{
	cout<<"You had a D+";
	
}
else if(score>=50&&score<=54)
{
	cout<<"You had a D" ;
	
}
else if(score>=45&&score<=49)
{
	cout<<"You had an E" ;

}
else if(score>=04&&score<=44)
{
   cout<<"You had an F" ;

}
return 0;
}
