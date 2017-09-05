#include "singleton_t1.h"

class test
{

};

int main()
{
	pattern::singleton<test>::get_ref();

	return 0;
}
