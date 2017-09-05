#include "singleton_t3.h"
#include <iostream>

using namespace pattern;

class temp :
	public singleton<temp>
{
public:
	~temp()
	{
		std::cout << "dtor\n";
	}
private:
	friend singleton<temp>;
	temp()
	{
		std::cout << "ctor\n";
	}
};

int main()
{
	std::cout << "let's go?\n";
	char c;
	std::cin >> c;
	{
		std::shared_ptr<temp> t1(temp::get());
	}
	return 0;
}
