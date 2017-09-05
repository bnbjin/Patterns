#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <iostream>
#include <memory>

namespace pattern
{
    template <class T>
    class singleton
    {
    public:
        static std::shared_ptr<T>& get()
        {
            if (!inst)
            {
                inst = std::shared_ptr<T>(new T);
            }
            return inst;
        }
	protected:
		singleton() {}
    private:
        static std::shared_ptr<T> inst;
        singleton(const singleton<T>&);
        singleton<T>& operator=(singleton<T>&);
    };

    template <class T>
    std::shared_ptr<T> singleton<T>::inst;
}

#endif // __SINGLETON_H__
