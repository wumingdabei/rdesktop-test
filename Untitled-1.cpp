#include<stdio.h>
#include <iostream>
int main()
{
	using namespace std;    
	//std::cout << "HelloWorld\n"<< std::endl;  
	//
	char c[] = { "Hello" };

	printf("%s%\n", c);

	cout << sizeof(c) << endl;
	getchar();
	return 0;
}