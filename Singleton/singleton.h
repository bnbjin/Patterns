#ifndef __SINGLETON_H__
#define __SINGLETON_H__

namespace pattern
{

    class singleton
    {
    public:
	    ~singleton();
	    static singleton* getinstance();
    protected:
        singleton();
    private:
        singleton(singleton&);
        singleton& operator=(singleton&);
        static singleton* instance;
    };

} // pattern

#endif // __SINGLETON_H__
