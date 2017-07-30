#include "singleton_t2.h"
#include <iostream>

class temp
{
public:
	~temp() { std::cout << "free\n"; }
};

int main()
{
	pattern::singleton<temp>::get_ref();
	return 0;
}
