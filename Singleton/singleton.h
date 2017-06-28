#ifndef __SINGLETON_H__
#define __SINGLETON_H__

namespace pattern
{

    class singleton
    {
    public:
	    ~singleton();
	    static singleton* get_ptr();
        static singleton& get_ref();
    protected:
        singleton();
    private:
        static singleton* instance;
        singleton(singleton&);
        singleton& operator=(singleton&);
    };

} // pattern

#endif // __SINGLETON_H__
