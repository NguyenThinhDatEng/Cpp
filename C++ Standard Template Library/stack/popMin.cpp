#include "stack.h"
//Given the height of the wooden bars in order from left to right
// for each stick you have to determine the distance to the wooden bar on the leftand how much longer it is.
std::vector<int> stickSpan(std::vector<int> arr)
{
	stack<int> st;
	vector<int> res;
	int n = arr.size();
	//# the first index of wooden bar
	st.push(0);		
	res.push_back(1);

	for (int i = 1; i < n; i++)
	{
		while (!st.empty() && arr[st.top()] <= arr[i])	
			st.pop();
		if (st.empty())
			res.push_back(i + 1);
		else
			res.push_back(i - st.top());
		st.push(i);
	}
	return res;
}