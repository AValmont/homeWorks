#include <iostream>
#include <array>

template <size_t quant>
void print(std::array<int, quant> arr);

int main()
{
	std::array<int, 9> arr_01{1,2,3,4,5,6,7,8,9};
	std::array<int, 4> arr_02{6,5,4,8};
	std::array<int, 5> arr_03{1,4,3,7,5};

	print(arr_01);
	print(arr_02);
	print(arr_03);

	return 0;
}

template <size_t quant>
void print(std::array<int, quant> arr)
{
	for (int i{ 0 }; i < arr.size();i++)
		std::cout << arr.at(i) << " ";

	std::cout << "\n";
}
