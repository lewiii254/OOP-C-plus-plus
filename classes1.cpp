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
void person::eat()
{
	cout << "Person eating ... \n";
};
void person::speak()
{
	cout << "Person speaking ..\n";
}
int main()
{

	person b;
	b.speak();
	return 0;
}
