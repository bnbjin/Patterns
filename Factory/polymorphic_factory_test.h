#pragma once

#include <iostream>
#include <string>
#include <map>

class Shape
{
public:
    
    virtual void draw() = 0;

    virtual void erase() = 0;

    virtual ~Shape() {}

};

typedef Shape TheType;

class factory
{
public:
    
    virtual ~factory();

    static TheType* create(std::string _id);

private:
    
    virtual TheType* _create() = 0;

    static std::map<std::string, factory*> factory_map;

    friend class factory_initializer;

};

class Circle: public Shape
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

    class _factory;
    friend class _factory;
    class _factory : public factory
    {
    public:

        Shape* _create()
        {
            return new Circle;
        }

    };

private:
    
    Circle() {}

};

class factory_initializer
{
    
    static factory_initializer fi;

    factory_initializer()
    {
        
        factory::factory_map["Circle"] =
            new Circle::_factory;
    
    }

};
