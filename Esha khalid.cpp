#include<iostream>
using namespace std;
struct student
{
    char Name[10];
	int Roll_No;	
	int Marks;
	int age;
};
int main()
{
	 struct student stu;
	 cout<<"Enter Student Name:";
	 cin>>stu.Name;
	 cout<<"Enter Student Roll_No:";
	 cin>>stu.Roll_No;
	 cout<<"Enter Student Marks:";
	 cin>>stu.Marks;
	 cout<<"Enter Student age:";
	 cin>>stu.age;
     cout<<"Name:"<<stu.Name<<endl;
     cout<<"Roll_No:"<<stu.Roll_No<<endl;
	 cout<<"Marks:"<<stu.Marks<<endl;
	 cout<<"Age:"<<stu.age;
	 
}

