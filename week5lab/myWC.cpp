#include <iostream>
#include <fstream>

int main(int argc, char** argv)
{
    int wordCount = 0;
    int lineCount = 0;

    //int characterCount = 0;
    std::ifstream inputfile;
    std::string line;
    inputfile.open("myCountry.txt"); 
    while (!inputfile.eof()){
        //std::cout << data << std::endl;
        std::string word = "";
        inputfile >> word;
        wordCount++;
    }
    //inputfile.close();


    //make use of rewind function here - or use seekg(0) -  call clear first
    inputfile.clear();
    inputfile.seekg(0);
    
    //std::ifstream inputfile;
    //inputfile2.open("myCountry.txt");

    if (inputfile)
    {
        while(std::getline(inputfile,line))
        {
            std::cout << line << std::endl;
            lineCount++;
        }
    }

    inputfile.close();
    std::cout << wordCount << std::endl;
    std::cout << lineCount << std::endl;

    return 0;
}