#ifndef __SINGLETON_H__
#define __SINGLETON_H__

namespace pattern
{
    template <class T>
    class singleton
    {
    public:
        ~singleton() {}
        static T* get_ptr()
        {
            if (0 == inst)
            {
                inst = new T;
            }
            return inst;
        }
        static T& get_ref()
        {
            if (0 == inst)
            {
                inst = new T;
            }
            return *inst;
        }
    protected:
        singleton() {}
    private:
        static T* inst;
        singleton(const singleton<T>&);
        singleton<T>& operator=(singleton<T>&);
    };

    template <class T>
    T* singleton<T>::inst = 0;
}

#endif // __SINGLETON_H__
