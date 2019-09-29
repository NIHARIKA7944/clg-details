#include<iostream.h>
#include<conio.h>
class college
{
public:
char  faculty[20];
char student[30];
char clgname[20];
char clgaddress[30];
char facname[20];
char facqual[20];
char subname[20];
int rno;
char cla[20];
char fname[20];
void enter ();
void input();
void edit();
void display();
};
void college::enter()
{
cout<<"enter the college name";
cin>>clgname;
cout<<"enter the address";
cin>>clgaddress;
}
void college::input()
{
cout<<"enter the faculty name:";
cin>>facname;
cout<<"enter the faculty qualification:";
cin>>facqual;
cout<<"enter the subject name:";
cin>>subname;
}
void college ::edit()
{
int rno;
cout<<"enter roll no"<<rno;
cin>>rno;
char name[20];
cout<<"enter name"<<name;
cout<<name;
cout<<"enter class"<<cla;
cout<<cla;
cout<<"enter the father name:";
cin>>fname;
}
void college :: display()
{
cout<<"college details:";
cout<<"college name:";
cout<<clgname;
cout<<"faculty:";
cout<<facname;
cout<<"faculty qualification:";
cout<<facqual;
cout<<"subject name:";
cout<<subname;
cout<<"rollnumber:";
cout<<rno;
cout<<"name";
cout<<clgname;
cout<<"clgname:";
cout<<cla;
cout<<"father name:";
cout<<fname;
}
int main()
{
college c;
c.enter();
c.input();
c.edit();
c.display();
getch();
return 0;
}