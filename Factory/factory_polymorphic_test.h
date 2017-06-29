#pragma once

#include <iostream>
#include <string>
#include <map>
#include "factory_polymorphic.h"

class Shape
{
public:
    virtual void draw() = 0;
    virtual void erase() = 0;
    virtual ~Shape() {}
};

namespace pattern
{
    template <>
    Shape* pattern::factory<Shape>::create(std::string id)
    {
        if (f_map.end() != f_map.find(id))
            return f_map[id]->_create();    
    }
}

class Circle: 
    public Shape
{
public:
    ~Circle() {}

    void draw() 
    {
        std::cout << "Circle::draw\n";    
    }

    void erase()
    {
        std::cout << "Circle::erase\n";
    }

    class ccl_factory : 
        public pattern::factory<Shape>
    {
        friend class pattern::fac_initr<Shape>;
        Shape* _create()
        {
            return new Circle;
        }
    };

private:
    Circle() {}
};

namespace pattern
{
    template <>
    pattern::fac_initr<Shape>::fac_initr()
    {
        factory<Shape>::f_map["Circle"] =
            new Circle::ccl_factory;
    }
}
