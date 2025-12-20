#include <iostream>
#include <string>

void fib_numbers(int index);


int main()
{
	int f_index{ 0 };
	std::cin >> f_index;
	fib_numbers(f_index);
	return 0;
}

void fib_numbers(int index)
{
	long long s_01 = 0;
	long long s_02 = 1;
	long long s;
	std::string result="0 1";

	if (index > 1)
	{
		for (int i = 0; i <= index - 3; i++)
		{
			s = s_01 + s_02;
			s_01 = s_02;
			s_02 = s;

			result = result + " " + std::to_string(s);
		}
	}
	else result = "0";

	std::cout << result;
}