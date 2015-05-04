#include "plist.h"
#include "plist.cpp"

#include <iostream>
#include <string>

using namespace std;
int main(){

    HB_SHR::PList<int> myPList;

    myPList.set(1, "e\n");
	cout << myPList.get_const_char(1);

	myPList.set(3, string(" Hello World!\n"));
	cout << myPList.get_string(3);
	
	return 0;
}
