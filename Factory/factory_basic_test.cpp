// #include "factory_basic.h"
#include <iostream>
#include <string>

class shape /*:
    public pattern::factory<shape>*/
{
public:
    virtual ~shape() {}
    virtual void draw() = 0;
    static shape* create(std::string id);
};

class circle :
    public shape
{
    friend class shape;
public:
    void draw() { std::cout << "draw circle\n"; }
private:
    circle() {}
};
   
shape* shape::create(std::string id)
{
    if (id == "circle")
    {
        return new circle;
    }

    return 0;
}
int main()
{
    shape* ccl = shape::create("circle");
    ccl->draw();
    return 0;
}
