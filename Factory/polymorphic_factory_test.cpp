#include "polymorphic_factory_test.h"

std::map<std::string, factory*> factory::factory_map;

factory_initializer factory_initializer::fi;

factory::~factory()
{}

TheType* factory::create(std::string _id)
{
    if (factory_map.find(_id) != factory_map.end())
    {
        return factory_map[_id]->_create();
    }
}

int main()
{
    Shape *cc = factory::create("Circle");

    cc->draw();

    cc->erase();

    return 0;
}
