#include <iostream>

using namespace std;

int sum(int arr[])
{
	int mSum = 0;
	for (int i = 0; i < 5; ++i)
		mSum += arr[i];
	return mSum;
}

double avg(int arr[])
{
	double mAvg = sum(arr) / 5.0;
	return mAvg;
}

int sort(int arr[], int num)
{
	int temp = 0;
	if (num == 1)
	{
		for (int i = 0; i < 4; ++i)
		{
			for (int j = i + 1; j < 5; ++j)
			{
				if (arr[i] > arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	else if (num == 2)
	{
		for (int i = 0; i < 4; ++i)
		{
			for (int j = i + 1; j < 5; ++j)
			{
				if (arr[i] < arr[j])
				{
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	else
		cout << "잘못된 입력입니다." << endl;

	cout << "정렬 결과: ";
	for (int i = 0; i < 5; ++i)
		cout << arr[i] << " ";

	return 0;
}

int main()
{
	int arr[5] = {0};
	int num = 0;

	for (int i = 0; i < 5; ++i)
		cin >> arr[i];

	cout << "배열의 합계: " << sum(arr) << endl;
	cout << "배열의 평균: " << avg(arr) << endl;

	cout << "오름차순 정렬(1) / 내림차순 정렬(2)" << endl;
	cin >> num;
	sort(arr, num);
}