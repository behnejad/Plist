#include "plist.h"
#include "plist.cpp"

#include <iostream>
#include <string>

using namespace std;
int main(){

    HB_SHR::PList<int> myPList;
//    myPList[2] = 2;
//    int a = myPList[3];
//    std::cout << a << std::endl;
    myPList.set(1, 'e');
	cout << myPList.get_char(1);
	myPList.set(3, string(" Hello World!\n"));
	cout << myPList.get_string(3);
	return 0;
}
