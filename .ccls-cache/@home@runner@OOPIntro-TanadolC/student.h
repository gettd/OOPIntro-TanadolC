#include <iostream>
using namespace std;

class student{
private:
  long id;
  string name;
  int age;

public://this one just declare that this function exists and take this kind of var

  void set_name(string="Get"); //setting default value to "Get" , this will show when theres no input when use function
  void print_name();
  void set_age(int);
  int get_age();
};//end of class declaration

//function resolutions (we declare what each functions does here)

void student::set_name(string n){
  name = n;
}

void student::print_name(){ 
  cout << "Name:" << name << endl;
}

void student::set_age(int a){
  age = a;
}

int student::get_age(){
  return age;
}