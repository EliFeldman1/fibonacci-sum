#include <vector>
#include <iostream>
using	namespace	std;
vector<int>  crateFibonacciArr(int n) {
	vector<int> arr;
	if (n>1)
	{
		arr.push_back(1);
		arr.push_back(2);
		for (size_t i = 2; i < n+1; i++)
		{
			if (arr[i - 1] + arr[i - 2] > n)
			{
				return arr;
			}
			arr.push_back(arr[i - 1] + arr[i - 2]);
		}
	}
	else if (n == 1)
	{
		arr.push_back(1);
	}
	
	return arr;
}

bool chackTwo(vector <int> arr,int n) {
	for (int i = arr.size()-1; i >-1 ; i--)
	{
		for (int ii = arr.size() - 1; ii > -1; ii--)
		{
			if ((arr[i]+arr[ii])==n)
			{
				return	true;
			}
			if ((arr[i] + arr[ii]) < n)
			{
				ii = -1;
			}
		}
		
	}
	return false;

}
bool chackThree(vector <int> arr, int n) {
	for (int i = arr.size() - 1; i > -1; i--)
	{
		for (int ii = arr.size() - 1; ii > -1; ii--)
		{
			for (int iii = arr.size() - 1; iii > -1; iii--){
				if ((arr[i] + arr[ii]+arr[iii]) == n)
				{
					return	true;
				}
			if ((arr[i] + arr[ii]+arr[iii]) < n)
			{
				iii = -1;
			}
		}
	}

	}
	return false;

}
bool chackFour(vector <int> arr, int n) {
	for (int i = arr.size() - 1; i > -1; i--)
	{
		for (int ii = arr.size() - 1; ii > -1; ii--)
		{
			for (int iii = arr.size() - 1; iii > -1; iii--) {
				for (int iiii = arr.size() - 1; iiii > -1; iiii--) {
					if ((arr[i] + arr[ii] + arr[iii]+arr[iiii]) == n)

					{
						return	true;
					}
					if ((arr[i] + arr[ii] + arr[iii]+arr[iiii]) < n)
					{
						iiii = -1;
					}
				}
			}
		}
	}
	return false;

}
bool chackFive(vector <int> arr, int n) {
	for (int i = arr.size() - 1; i > -1; i--)
	{
		for (int ii = arr.size() - 1; ii > -1; ii--)
		{
			for (int iii = arr.size() - 1; iii > -1; iii--) {
				for (int iiii = arr.size() - 1; iiii > -1; iiii--) {
					for (int iiiii = arr.size() - 1; iiiii > -1; iiiii--){
					if ((arr[i] + arr[ii] + arr[iii] + arr[iiii]+arr[iiiii]) == n)

					{
						return	true;
					}
					if ((arr[i] + arr[ii] + arr[iii] + arr[iiii]+arr[iiiii]) < n)
					{
						iiiii = -1;
					}
				}
			}
		}
	}
	}
	return false;

}
bool chackSix(vector <int> arr, int n) {
	for (int i = arr.size() - 1; i > -1; i--)
	{
		for (int ii = arr.size() - 1; ii > -1; ii--)
		{
			for (int iii = arr.size() - 1; iii > -1; iii--) {
				for (int iiii = arr.size() - 1; iiii > -1; iiii--) {
					for (int iiiii = arr.size() - 1; iiiii > -1; iiiii--) {
						for (int six = arr.size() - 1; six > -1; six--){
						if ((arr[i] + arr[ii] + arr[iii] + arr[iiii] + arr[iiiii]+arr[six]) == n)

						{
							return	true;
						}
						if ((arr[i] + arr[ii] + arr[iii] + arr[iiii] + arr[iiiii]+arr[six]) < n)
						{
							six = -1;
						}
					}
				}
			}
		}
	}
	}
	return false;

}
int main()
{
	int num = 1234;
	vector<int> arr= crateFibonacciArr(num);// crate all the fiboncci numbers until the n
	bool two = chackTwo(arr, num);
	bool three = chackThree(arr, num);
	bool four = chackFour(arr, num);
	bool five = chackFive(arr, num);
	bool six = chackSix(arr, num);
	return	0;
}