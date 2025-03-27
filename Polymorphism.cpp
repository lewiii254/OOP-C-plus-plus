#include <iostream>
using namespace std;
class animal{
	public:
		int legs,wings;
		void move();
		void move(int e);
		void move(int e, int w);
};
void animal::move(){
	cout <<"Moving Anyhow .....\n";
}
void animal::move(int e){
	cout << "Moving with " <<e<<" legs ...\n";
}
void animal::move(int e, int w){
	cout<< "Flying with "<<w <<" wings ...\n";
}

int main()
{
	animal h;
	h.move();
	h.move(4);
	h.move(2,2);
	return 0;
}