#include <iostream>
#include <assert.h>
#include <vector>
#include <utility>
using namespace std;

std::vector<std::pair<string ,string> > oColorMaps;

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    
    int i = 0, j = 0;
    
    for(i = 0; i < 5; i++) 
    {
        for(j = 0; j < 5; j++) 
        {
            pair<string, string> Individualpair;
            Individualpair.first = majorColor[i];
            Individualpair.second = minorColor[i];
            oColorMaps.push_back(Individualpair);
            
            std::cout << i * 5 + j << " | " << majorColor[i] << " | " << minorColor[i] << "\n";
        }
    }
    
    print();
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    
    // random check. The second pair in the ColorMap should be "White,Orange"
    std::pair <string, string> oExpectedColorPairAtSecondIndex ("White","Orange");
    assert(oExpectedColorPairAtSecondIndex == oColorMaps[1]);
    
    
    std::cout << "All is well (maybe!)\n";
    return 0;
}
