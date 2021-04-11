#include <iostream>
#include <fstream>
int main()

{

    std::ofstream myfile;
    myfile.open("output.txt");

    myfile << "Hello, World!\n";

    myfile.close();

    std::cout << "Hello, World!\n";
    return 0;
}
