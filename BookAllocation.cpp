#include <iostream>
#include <vector>
using namespace std;

bool is_Valid(vector<int>& arr, int no_Books, int no_Readers, int max_Allowed_Pages) {

	int students = 1, pages = 0;

	for (int i = 0; i < no_Books; i++) {

		if (arr[i] > max_Allowed_Pages) {
			return false;
		}

		if (arr[i] + pages <= max_Allowed_Pages) {
			pages += arr[i];
		}
		else {
			students++;
			pages = arr[i];
		}
	}
	return students > no_Readers ? false : true;
}




int book_Allocation(vector<int> &arr, int no_Books, int no_Readers) {
	
	int sum = 0;

	for (int i = 0; i < no_Books; i++) {
		sum += arr[i];
		}
	int answer = -1;
	int start = 0, end = sum;
	
	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (is_Valid(arr, no_Books, no_Readers, mid)){ //left

			answer = mid;
			end = mid-1;
		} else { //Right
			start = mid+1;
		}
	}
	return answer;
}

int main() {

	vector<int> arr = {10,20,30,40};
	int no_Books = 4, no_Readers = 2;
	cout << "Minimum possible maximum pages: " << book_Allocation(arr, no_Books, no_Readers) << endl;
	return 0;
}
