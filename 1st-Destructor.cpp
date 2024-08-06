//It is an instance member function that is invoked automatically whenever an object is going to be destroyed
//It is a last function that is going to be called Before an object destroyed
#include<iostream>
using namespace std;

class Customer
{
  string name ;
  int *data;

  public:
  Customer()  
  {
    name= name;
    data=new int;
    *data=10;

    cout<<"cunstructor is called \n";

  }
  //Destructor
  ~Customer()
  {
   delete data;
   cout<<"desctructor is called \n"; 
  }
};

int main()
{
    Customer A1;
}