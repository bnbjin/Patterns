#ifndef __FACTORY_BASIC_H__
#define __FACTORY_BASIC_H__

namespace pattern
{
    template <class T>
    class factory
    {
    public:
        static T* create() = 0;
    };
}

#endif // __FACTORY_BASIC_H__
