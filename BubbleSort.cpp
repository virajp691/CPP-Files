#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void swap(int i, int k, vector<int> input) {
	int t;
	t = input[i];
	input[i]=input[k];
	input[k]=t;
}

vector<int> bubble_sort(vector<int> input) {
	int n = (int) input.size();
	int k;
	for (int m=n; m>=0; m--) {
		for (int i=0;i<n-1;i++) {
			k=i+1;
			if (input[i]>input[k]) {
				int t=input[i];
				input[i]=input[k];
				input[k]=t;
			} 
		}
	}
	return input;
}

int main(int argc, char* argv[]) {
	vector<int> input;
	for (int x=1; x<argc; x++)
		input.push_back(atoi(argv[x]));

	cout << "Input:";
	for (vector<int>::iterator it = input.begin(); it != input.end(); ++it)
		cout << ' '<< *it;
	cout << '\n';

	vector<int> output = bubble_sort(input);

	cout << "Output:";
	for (vector<int>::iterator it = output.begin(); it != output.end(); ++it)
		cout << ' '<< *it;
	cout << '\n';
}


