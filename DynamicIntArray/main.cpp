#include <iostream>
#include "DynamicIntArray.h"

using namespace std;

int main() {
   
        

    int arr[]={1,2,3};
    DynamicIntArray b(arr,3);
    cout << b.getSize() << endl;
    b.print();
    b.push_back(4);
    b.print();


  
    return 0;
}
