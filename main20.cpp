#include <iostream>
using namespace std;

class base 
{	public :
	void display ()
	{
		cout <<" this is the class A function"<<endl;
	 } 
};
class B : public base 
{	public :
	void display ()
	{
		cout <<" this is the class B function"<<endl;
	 } 
};
class C :public base 
{	public :
	void display ()
	{
		cout <<" thi is the class C function"<<endl;
	 } 
};
class D : public B, public C 
{	public :
	void display ()
	{
		cout <<" thi is the class D function"<<endl;
	 } 
};
int main ()
{
	D obj1 ;
	obj1.display A();
	return 0;
}