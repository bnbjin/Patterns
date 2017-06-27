#ifndef __SINGLETON_H__
#define __SINGLETON_H__

template <class T>
class singleton
{
public:
    ~singleton() {}
    static T* get_ptr()
    {
        if (0 == instance)
        {
            instance = new T;
        }
        return instance;
    }
    static T& get_ref()
    {
        if (0 == instance)
        {
            instance = new T;
        }
        return *instance;
    }
protected:
    singleton() {}
private:
    static T* instance;
    singleton(const singleton<T>&);
    singleton<T>& operator=(singleton<T>&);
};

template <class T>
T* singleton<T>::instance = 0;

#endif // __SINGLETON_H__
