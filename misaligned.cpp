#include <iostream>
#include <assert.h>
#include <vector>

std::vector<std::string> majorColorToBePrinted;
std::vector<std::string> minorColorToBePrinted;

void print()
{
	std::cout<<"MajorColor"<<"\n";
    std::vector<std::string>::iterator itr = majorColorToBePrinted.begin();
    while(itr!= majorColorToBePrinted.end())
    {
        std::cout<<"\n"<<*itr;
        ++itr;
    }
	
	std::cout<<"\nMinorColor";
	itr = minorColorToBePrinted.begin();
    while(itr!= minorColorToBePrinted.end())
    {
        std::cout<<"\n"<<*itr;
        ++itr;
    }
}
int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) 
    {
        majorColorToBePrinted.push_back(majorColor[i]);
        for(j = 0; j < 5; j++) 
        {
            minorColorToBePrinted.push_back(minorColor[i]);
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    
    print();
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
