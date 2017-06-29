#ifndef __POLYMORPHIC_FACTORY_H__
#define __POLYMORPHIC_FACTORY_H__

#include <map>

namespace pattern
{
    template <class T>
    class fac_initr
    {
        static fac_initr<T> fi;
        fac_initr() {};    // needs user to define
    };

    template <class T>
    fac_initr<T> fac_initr<T>::fi;
    
    template <class T>
    class factory
    {
        friend class fac_initr<T>;
    public:
        static T* create(std::string id) {}
    private:
        virtual T* _create() = 0;
        static std::map<std::string, factory*> f_map;
    };

    template <class T>
    std::map<std::string, factory<T>*> factory<T>::f_map;
}

#endif // __POLYMORPHIC_FACTORY_H__
