#include<iostream>
#include<vector>
#include<set>
using namespace std;

class solution5 {
public:

	vector<int> maxSlidingWindow(vector<int>& nums, int k) {
	//Logic
		vector<int> result;

		//special case
		if ((int)nums.size() < k)
			return result;

	    multiset<int> st;

	    for (int i = 0; i < k; ++i) {
			st.insert(-nums[i]);  // inserting with negative values because this make the multiset sorting from big to small
		}

	    result.push_back(-*st.begin());

	    for (int i = k; i < (int)nums.size(); ++i) {
	    	st.erase(st.find(-nums[i-k]));
	    	st.insert(-nums[i]);
	    	result.push_back(-*st.begin());
		}

	    return result;
	}

};

int main_8_5() {

//*************************************************************** STL Practice *************************************************

// STL Practice 1 : Sum of last K numbers (stream)

//____________________________________________________________________

// STL Practice 2 :


//____________________________________________________________________

// STL Practice 3
// STL Practice 4

//____________________________________________________________________

// STL Practice 5
	/*
	 You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right.

	 You can only see the k numbers in the window. Each time the sliding window moves right by one position.

	 Return the max sliding window.



	 Example 1:

	 Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
	 Output: [3,3,5,5,6,7]
	 Explanation:
	 Window position                Max
	 ---------------               -----
	 [1  3  -1] -3  5  3  6  7       3
	 1 [3  -1  -3] 5  3  6  7       3
	 1  3 [-1  -3  5] 3  6  7       5
	 1  3  -1 [-3  5  3] 6  7       5
	 1  3  -1  -3 [5  3  6] 7       6
	 1  3  -1  -3  5 [3  6  7]      7

	 Example 2:

	 Input: nums = [1], k = 1
	 Output: [1]
	 */

	vector<int> nums = { 1, 3, -1, -3, 5, 3, 6, 7 };

	solution5 s;

	nums = 	s.maxSlidingWindow(nums, 3);
	for (int x : nums )
		cout << x << " ";

	return 0;
}

