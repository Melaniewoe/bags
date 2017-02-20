//
//  main.cpp


#include <iostream>
#include <iomanip>
#include <fstream>
#include "my_bag.h"
#include "bag1.h"


using namespace std;


int main()
{
    set nums;
    
    //input file
    const char* filename = "input.dat";
    std::ifstream inFile(filename);
    
    if(!inFile)
    {
        cout << endl << "Failed to open file " << filename; //to check if the file can be opened
        return 1;
        
    }
    
    
    long n = 0;
    while (!inFile.eof())
    {
        inFile >> n;   //to read file
        
        cout << std::setw(10) << n; //output the file
    }
    
    
    
    
}





