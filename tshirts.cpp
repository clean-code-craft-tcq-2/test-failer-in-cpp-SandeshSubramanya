#include <iostream>
#include <assert.h>

char size(int cms) {
    char sizeName = '\0';
    if(cms < 38) {
        sizeName = 'S';
    } else if(cms > 38 && cms < 42) {
        sizeName = 'M';
    } else if(cms > 42) {
        sizeName = 'L';
    }
    return sizeName;
}

int main() {
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    
    // expecting for the size equaling 38 and 42 as M. 
    assert(size(42) == 'M');
    assert(size(38) == 'M')
    
        std::cout << "All is well (maybe!)\n";
    return 0;
}
