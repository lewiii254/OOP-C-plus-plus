#include <iostream>
using namespace std;
class animal
{
public:
	string color;
	void move();
};
class mammal : public animal
{
public:
	void breastfeed();
};
class bird : public animal
{
public:
	void fly();
};
class bat: public mammal, public bird
{
	int teeth;
};
void animal::move()
{
	cout << "animal moving ....\n";
}
void mammal::breastfeed()
{
	cout << "MM Breast feedding ...\n";
}
	 void bird::fly()
{
	cout << "Bird Flying ...\n";
}
int main()
{
	bat w;
	w.breastfeed();
	return 0;
}
\
