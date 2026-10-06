#include <iostream>
#include <ostream>
#include <fstream>
#include "exceptions.h"


int main()
{
    std::ofstream ofout;
    ofout.open("fout.md");

    if (ofout.is_open())
    {
        ofout << "Hiiiiiii" << std::endl;
    }

    std::fstream fout;
    fout.open("myFile.md", std::ios::out);
    if (fout.is_open())
    {
        fout << "Hiiiiiiiiiiiiiiiiiiiii" << std::endl;
    }

    return 0;
}