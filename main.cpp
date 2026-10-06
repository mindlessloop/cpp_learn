#include <iostream>
#include <ostream>
#include <fstream>
#include "exceptions.h"

using namespace std;

int main()
{
    ofstream ofout;
    string ofoutPath = "fout.md";
    ofout.open(ofoutPath);

    if (ofout.is_open())
    {
        ofout << "Hiiiiiii" << endl;

        ofout.close();
    }

    fstream fout;
    string foutPath = "myFile.md";
    fout.open(foutPath, std::ios::out);

    if (fout.is_open())
    {
        fout << "Hiiiiiiiiiiiiiiiiiiiii" << endl;
        fout << "Hiiiiiiiiiiiiiii" << endl;

        fout.close();
    }

    return 0;
}