#include <iostream>
#include <string>
using namespace std;

class Person
{
public:			//acces specifier
  string name;		//attribute
  int age;		//attribute


  void tenYearsYounger() {
	  age = age - 10;
}
	  
};

int main()
{
	Person nathan;	//creating object of person

	nathan.name = "nathan";
	nathan.age  = 19;

	cout << nathan.name << " is " << nathan.age << " years old " << '\n';

	nathan.tenYearsYounger();
	cout << "ten years ago nathan was " <<  nathan.age << " years old " << '\n';
}

