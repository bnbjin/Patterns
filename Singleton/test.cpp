#include "singleton_t.h"
#include <iostream>

class test : public singleton<test>
{
public:
    void if1() { std::cout << "test::if1()\n"; }

    friend class singleton<test>;
private:
    test() {}
};

int main()
{
    test::get_ref().if1();
    return 0;
}
