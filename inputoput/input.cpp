#include <fstream>
#include <iostream>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <ostream>
using namespace std;
int main()
{
    ifstream myfile("input.txt");
    fstream f("input.txt", ios::app);
    ofstream fout("output.txt", ios::app);
    if (myfile.is_open())
    {
        char mychar;
        string s;
        string line;

        // while (getline(myfile, line))
        // {
        //     fout << line << "\n";
        // }
        while (myfile.good())
        {
            char c;
            c = myfile.get();
            cout << c;
        }
    }
    fout.close();

    return 0;
}
