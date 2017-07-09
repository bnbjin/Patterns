#ifndef __BUILDER_H__
#define __BUILDER_H__

namespace pattern
{
    template <class T> 
    class bldr_part
    {
    public:

    };

    template <class T>
    class builder
    {
    public:
        builder() :
            m_obj(0)
        {}
        void create() { m_obj = new T; }
        T* get_product()
        {
            T* temp = m_obj;
            m_obj = 0;
            return temp;
        }
        void get_name();
        /* interfaces of subpart */
    protected:
        T* m_obj;
    };

    template <class T>
    class builder_technician
    {
    public:
        builder() :
            b(0)
        {}
        void set_builder(builder<T>* bdr)
        { b = bdr; }
        void build();
    private:
        builder<T>* b; 
    };
}

#endif // __BUILDER_H__
