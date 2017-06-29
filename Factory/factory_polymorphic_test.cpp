#include "factory_polymorphic_test.h"

int main()
{
    Shape *cc = pattern::factory<Shape>::create("Circle");

    cc->draw();

    cc->erase();

    return 0;
}
