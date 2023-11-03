#include <iostream>
#include "driver.h"

using namespace std;


void main() 
{

	if (!mem::find_driver()) {
		cout << "driver is not loaded\n";
	}
	mem::process_id = mem::find_process("notepad.exe");

	virtualaddy = mem::find_image();

	cout << "base address -> " << virtualaddy << "\n";

	cin.get();
}