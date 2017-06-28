#include "singleton.h"

using namespace pattern;

singleton* singleton::instance = 0;

singleton* singleton::get_ptr()
{
	if (0 == instance)
	{
		instance = new singleton();
	}
	
	return instance;
}

singleton& singleton::get_ref()
{
	if (0 == instance)
	{
		instance = new singleton();
	}
	
	return *instance;
}
