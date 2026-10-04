#include <iostream>
#include <ostream>
#include "exceptions.h"

// A custom exception type. Inheriting from std::exception lets callers catch
// it either specifically as myExceptions or more generally as std::exception.
class myExceptions : public std::exception
{
    public:
        // Overrides std::exception's standard error-message function.
        // const char* is a pointer to a null-terminated string; const means
        // this function does not change the exception object. The old throw()
        // spelling promises not to throw; modern C++ writes this as noexcept.
        virtual const char* what() const throw()
        {
            return "Hi cause";
        }

        // This is an extra function specific to myExceptions. Unlike what(),
        // when() is not part of std::exception and generic handlers won't call it.
        virtual const char* when() const throw()
        {
            return "Hi afternoon";
        }
};

// Demonstrates a function that reports a failure by throwing our custom type.
class TestClass
{
    public:
    // static means this can be called as TestClass::sthWrong() without an object.
    static void sthWrong()
    {
        // throw creates the exception object and transfers control to a matching catch.
        throw myExceptions();
    }
};

int main()
{
    TestClass test;

    try
    {
        test.sthWrong();
    // Catch by reference so the thrown object is not copied or sliced.
    }catch (myExceptions &e){
        // what() is the standard message; this example prints the custom when() value.
        std::cout << e.when() << std::endl;
    }
    return 0;
}
