#include<iostream>
using namespace std;

class Customer
{
    string name ;
    int *data;

    public: 
    Customer(string name)
    {
     this->name=name;
     cout<<"Cunstructor is called : \n"<<name<<endl;
    }
   
   ~Customer()
   {
    cout<<"Destructor is called : \n"<<name<<endl;
   }

   Customer() //<--Object ko dynamically create
   {
    name="4";
    cout<<"cunstructor is : "<<name<<endl;
   }

};

int main()
{
    Customer A1("1"),A2("2"),A3("3");
    Customer *A4 = new Customer ;
}