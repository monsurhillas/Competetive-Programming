#include <iostream>
using namespace std;

int main() {

	int testCase, n, b, index, arr[10005], max, temp;
	cin>>testCase;
	for(int i=0;i<testCase;i++)
        {
		cin>>n; b=n;
		for(int i=0; i<10005; i++) arr[i]=0; max=0;
		for(int j=0;j<b;j++)
        {
			cin>>index; arr[index]++;
		}
		for(int i=0; i<10005; i++) {
			if(arr[i]>max) {
				max=arr[i]; temp=i;
			}
		}
		cout<<temp<<" "<<max<<endl;
	}
	return 0;
}
