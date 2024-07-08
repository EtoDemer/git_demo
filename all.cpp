#include<iostream>
using namespace std;
#include<vector>

vector<int>twoSum(vector<int> nums, int target) {
	int n = nums.size();
	vector<int>num(3, 1);
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			if (nums[i] + nums[j] == target) {
				nums.clear();
				nums.push_back(i);
				nums.push_back(j);
				nums.push_back(1);
				return nums;
			}
		}
	}
	return nums;
}

int main()
{

	int n;
	cout << "Please input the length of the array arr: ";
	cin>>n;
	int* arr = new int[n];
	cout << "Please input the numbers:";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	vector<int> nums;

	cout << "arr[" << n << "]=";
	for (int i = 0; i < n; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		nums.push_back(arr[i]);
	}

	int target = 0;
	cout << "Please input the target:";
	cin >> target;
	vector<int>res = twoSum(nums, target);
	switch (res[3])
	{
		case 1:
			cout << "that is " << res[0] << " plus " << res[1] << " equals " << target;
			break;
		default:
			cout << "There are no two numbers in the array arr that add up to the "<< target << endl;
	}
	
	delete[] arr;
}