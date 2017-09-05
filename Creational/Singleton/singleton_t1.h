#ifndef __SINGLETON_H__
#define __SINGLETON_H__

#include <iostream>

namespace pattern
{
    template <class T>
    class singleton
    {
    public:
        static T* get_ptr()
        {
			m_gc;	//!!
            if (0 == inst)
            {
                inst = new T;
            }
            return inst;
        }
        static T& get_ref()
        {
			m_gc;	//!!
            if (0 == inst)
            {
                inst = new T;
            }
            return *inst;
        }
	protected:
		//singleton() {}	
    private:
        static T* inst;
		class gc
		{	
		public:
			gc()
			{
				std::cout << "gc ctor\n";
			}
			~gc()
			{
				std::cout << "gc dtor\n";
				if (inst)
				{
					delete inst;
				}
			}
		};
		friend gc;
		static gc m_gc;
        singleton() {}
        singleton(const singleton<T>&);
        singleton<T>& operator=(singleton<T>&);
    };

    template <class T>
    T* singleton<T>::inst = 0;

	template <class T>
	typename singleton<T>::gc singleton<T>::m_gc;
}

#endif // __SINGLETON_H__
