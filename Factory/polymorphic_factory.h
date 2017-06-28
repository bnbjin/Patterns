#ifndef __POLYMORPHIC_FACTORY_H__
#define __POLYMORPHIC_FACTORY_H__

#include <map>

namespace pattern
{
    template <class T>
    class factory
    {
    public:
        static T* create(std::string id) = 0;
    private:
        virtual T* _create() = 0;
        static std::map<std::string, factory*> f_map;
    };

    template <class T>
    std::map<std::string, factory*> factory<T>::f_map;

    template <class T>
    fac_initr()
    {
        static fac_initr<T> fi;
        factory_initr();    // needs user to define
    };

    template <class T>
    fac_initr<T> fac_initr<T>::fi;
}

#endif // __POLYMORPHIC_FACTORY_H__
