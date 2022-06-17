//Binary search work only with sorted collection

#include <iostream>
#include <list>
#include <vector>


template<typename T>
int binary_search(std::vector<T> arr,T n)
{
	T findedNum;
	int low = 0;
	int high = arr.size() - 1;

	while (low <= high)
	{
		int mid = low + high;
		T guess = arr[mid];

		if(guess == n)
		{
			return mid;
		}

		if(guess > n)
		{
			high = mid - 1;
		}
		else
			low = mid + 1;
	}

	return 0;

}


int main()
{
	char n;
	std::cin>>n;
	std::cout << binary_search({'a', 'b', 'c', 'd', 'f'}, n);
	return 0;
}