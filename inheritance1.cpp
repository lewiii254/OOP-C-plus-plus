#include <iostream>
using namespace std;
class person
{
public:
	string name;
	int phone, idno;
	void eat();
	void speak();
};
class student : public person
{
public:
	int regno;
	void sitforexams();
};
void person::eat()
{
	cout << "Person eating ... \n";
};
void person::speak()
{
	cout << "Person speaking ..\n";
}
void student::sitforexams()
{
	cout << "students doing exams ...\n";
}
int main()
{

	student b;
	b.sitforexams();
	return 0;
}
