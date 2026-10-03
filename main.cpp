#include <iostream>
#include <ostream>
#include "exceptions.h"

void myTest()
{
    bool success = true;
    if (!success)
    {
        throw 10;
    }
}



int main()
{
    try
    {
        myTest();
    } catch (int e)
    {
        std::cout << "myTest(): " << e << std::endl;
    }

    std::cout << "myTest()" << std::endl;

    meExceptionClass meClass;

    try
    {
        meClass.meException();
    } catch (int e)
    {
        std::cout << "meClass.meException(): " << e << std::endl;
    }


    std::cout << "meClass.meException()" << std::endl;

    return 0;
}