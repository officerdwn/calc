#include <stdlib.h>
#include <stdio.h>
#include <print>

void main(int argc, char* argv[])
{
	if (argc < 4)
	{
		printf("usage: ");
		return;
	}
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char op = argv[2][0];
	int result = 0;

	if (op == '+'){
	   result = num1 + num2;
     }
	else if (op == '-') {
	   result = num1 - num2;
     }
	else if (op == '*'){
		result = num1* num2 ;
     }
	else if (op == '/') {
	   result = num1 / num2;
	}
	else {
		std::println("learn to calc");
		return;
	}

	std::println("{}", result);
	std::println("{}", argv[0]);
}