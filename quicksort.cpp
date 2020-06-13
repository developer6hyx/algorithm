/*THE PART OF ALGORITHM*/
namespace sort
{
	void quicksort(int __ARRAY[], int __LEFT, int __RIGHT)
	{
		if(__LEFT > __RIGHT)
		{
			return ;
		}
		int __I = __LEFT, __J = __RIGHT, __T = 0, __TEMP = __ARRAY[__LEFT];
		while(__I != __J)
		{
			while(__ARRAY[__J] >= __TEMP && __I < __J)
			{
				__J--;
			}
			while(__ARRAY[__I] <= __TEMP && __I < __J)
			{
				__I++;
			}
			if(__I < __J)
			{
				__T = __ARRAY[__I];
				__ARRAY[__I] = __ARRAY[__J];
				__ARRAY[__J] = __T;	
			} 
		}
		__ARRAY[__LEFT] = __ARRAY[__I]; __ARRAY[__I] = __TEMP;
		sort::quicksort(__ARRAY, __LEFT, __I - 1);
		sort::quicksort(__ARRAY, __I + 1, __RIGHT);
		return ;
	}
}
/*THE PART OF FUNCTION MAIN*/
/*
#include <iostream>
int a[10001] = {};
int main(int argc, char *argv[])
{
	int n;
	std::cin >> n;
	for(int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	sort::quicksort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}
	return 0;
}
*/
