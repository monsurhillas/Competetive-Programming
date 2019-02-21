#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int testCase;
	cin >> testCase;
	int arr[testCase];

	for (int index=0;index<testCase;index++) {
		cin >> arr[index];
		arr[index]=arr[index]%2;
	}
	int number = count(arr, arr + testCase, 1);
	if (number>testCase-number)
        {
		for (int index2=0;index2<testCase;index2++)
		{
			if (!arr[index2])
                {
                    cout << index2 + 1;
                    break;
                }
		}
        }
    else
    {
		for (int index3 = 0; index3 < testCase; index3++) {
			if (arr[index3]) {
				cout<<index3+1;
				break;
			}
		}

	}
	return 0;
}
