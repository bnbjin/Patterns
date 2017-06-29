#ifndef __FACTORY_BASIC_H__
#define __FACTORY_BASIC_H__

#include <string>

namespace pattern
{
    template <class T>
    class factory
    {
    public:
        static T* create(std::string id);
    };
}

#endif // __FACTORY_BASIC_H__
