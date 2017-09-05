#ifndef __SINGLETON_H__
#define __SINGLETON_H__

namespace pattern
{
    template <class T>
    class singleton
    {
    public:
        static T* get_ptr()
        {
            return &inst;
        }
        static T& get_ref()
        {
            return inst;
        }
    protected:
        singleton() {}
    private:
        static T inst;
        singleton(const singleton<T>&);
        singleton<T>& operator=(singleton<T>&);
    };

    template <class T>
    T singleton<T>::inst;
}

#endif // __SINGLETON_H__
