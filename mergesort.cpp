/* THE PART OF ALGORITHM*/
namespace sort
{
	void mergesort(int* __ARRAY, int* __TEMPARRAY, int __LEFT, int __RIGHT)
	{
		if(__LEFT == __RIGHT)
		{
			return ;
		}
		int __MID = (__LEFT + __RIGHT) / 2;
		mergesort(__ARRAY, __TEMPARRAY, __LEFT, __MID);
		mergesort(__ARRAY, __TEMPARRAY, __MID + 1, __RIGHT);
		int __I = __LEFT, __J = __MID + 1, __K = __LEFT;
		while(__I <= __MID && __J <= __RIGHT)
		{
			if(__ARRAY[__I] <= __ARRAY[__J])
			{
				__TEMPARRAY[__K] = __ARRAY[__I]; __K++; __I++; 
			}
			else
			{
				__TEMPARRAY[__K] = __ARRAY[__J]; __K++; __J++;
			}
		}
		while(__I <= __MID)
		{
			__TEMPARRAY[__K] = __ARRAY[__I]; __K++; __I++;
		}
		while(__J <= __RIGHT)
		{
			__TEMPARRAY[__K] = __ARRAY[__J]; __K++; __J++;
		}
		for(int __ITERATOR = __LEFT; __ITERATOR <= __RIGHT; __ITERATOR++)
		{
			__ARRAY[__ITERATOR] = __TEMPARRAY[__ITERATOR];
		}
		return ;
	}
}
/* THE PART OF FUNCTION main(int, char**)*/
/*
#include <iostream>
int a[10001] = {}, ta[10001] = {};
int main(int argc, char *argv[])
{
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	sort::mergesort(a, ta, 0, n - 1);
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	return 0;
}
*/
