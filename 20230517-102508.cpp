#include<iostream>
using namespace std;
class Employee
{
int b_s , n_s;
long long int emp_num;
char emp_name[30];
float d_a , i_t;
public : 
  void getdata()
  {
cout<<"Enter employee's name (without space) : ";cin>>emp_name;
cout<<"enter employee's number : ";
cin>>emp_num;
cout<<"enter employee's basic salary : ";cin>>b_s;
cout<<"enter d_a(%) to be added in basic salary : ";
cin>>d_a;
cout<<"enter income tax rate(%) to be deducted from basic salary : ";
cin>>i_t;
}
void putdata()
{
cout<<"Employees's Name : "<<emp_name<<endl;
cout<<"Employees's number is : "<<emp_num<<endl;
cout<<"Employees's basic salary is : "<<b_s<<endl;
d_a=(b_s*d_a)/100;
cout<<"Amount of d_a to be added in basic salary : "<<d_a<<endl;
i_t=(b_s*i_t)/100;
cout<<"Amount of income tax to be deducted from basic salary : "<<i_t<<endl;
n_s=(b_s-i_t)+d_a;
cout<<"Net salary to be given : "<<n_s<<endl;
}
};
int main()
{
Employee a;
a.getdata();
a.putdata();
return 0;
}