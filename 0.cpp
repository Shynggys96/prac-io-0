#include <iostream>
 
int main() {
	char *hello = new char[14];
	hello[0] = 'H';
	hello[1] = 'e';
	hello[2] = 'l';
	hello[3] = 'l';
	hello[4] = 'o';
	hello[5] = ',';
	hello[6] = ' ';
	hello[7] = 'w';
	hello[8] = 'o';
	hello[9] = 'r';
	hello[10] = 'l';
	hello[11] = 'd';
	hello[12] = '!';
	hello[13] = '\0';
	std::cout << hello << std::endl;
	return (2 + 2 == 5);
}
