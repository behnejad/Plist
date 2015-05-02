#include "plist.h"
#include "plist.cpp"

#include <iostream>
#include <vector>
using namespace std;
int main(){

    HB_SHR::PList<int> myPList;
//    myPList[2] = 2;
//    int a = myPList[3];
//    std::cout << a << std::endl;
    myPList.set(1, 'e');
	cout << myPList.get_char(1);
    
	return 0;
}
