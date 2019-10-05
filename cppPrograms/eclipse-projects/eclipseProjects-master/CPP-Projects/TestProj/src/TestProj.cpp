//============================================================================
// Name        : TestProj.cpp
// Author      : AngsTD
// Version     :
// Copyright   : Dont you Dare :P
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include "testheader.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	uint32_t val = 512;
	uint32_t* addr;
	addr = &val;
	uint32_t echo;
	//echo = sd_ble_gap_address_get(addr);
	cout<<"echo : "<<echo<<endl;

	cout << "i am the king"<<endl;
	return 0;
}
/*
uint32_t sd_ble_gap_address_get(uint32_t * const p_addr)
{
return *p_addr;
}
*/
