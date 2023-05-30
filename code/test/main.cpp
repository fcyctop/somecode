#include<iostream>
#include<simpleThread.h>


#pragma comment(lib, "somecode.lib")

void* thread(void* vargp)
{
	printf("Hello world!\n");
	return nullptr;
}

int main()
{
	
	system("pause");
	return 0;
}