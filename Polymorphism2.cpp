#include <iostream>
using namespace std;
class animal{
	public:
		int legs,wings;
		void move();
};
class bird : public animal{
	public:
		void move();
};
void animal::move(){
	cout <<"Moving Anyhow .....\n";
}
void bird::move(){
	cout<< "Bird Flying...\n";
}

int main()
{
	bird b;
	b.move();
	return 0;
}