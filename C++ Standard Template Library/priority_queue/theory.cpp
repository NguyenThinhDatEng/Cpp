// that the element at the top is always the element with the highest priority (do uu tien) compared to (so voi) other elements
// same as stack

//# The default comparison operator when using the priority queue is the less . operation
/*
	equal_to	Bằng (==)
	not_equal_to	Không bằng (!=)
	greater	Lớn hơn (>)
	less	Nhỏ hơn (<)
	greater_equal	Lớn hơn hoặc bằng (>=)
	less_equal	Nhỏ hơn hoặc bằng (<=)
*/
//# declare
/*
	priority_queue <int> myPriorityQueue;
	=> The element with the highest priority is the element with the largest value.
	priority_queue <int,vector<int>,greater<int> > myPriorityQueue ;
	=> The element with the highest priority is the element with the smallest value.

	*** Declare using self-defined comparison class
	struct cmp{
		bool operator() (int a,int b) {return a<b;}
	};
	int main() {
		priority_queue <int,vector<int>,cmp > q;
	}
*/

//#Ex
/*
	#include <iostream>
	#include <queue>
	using namespace std;
	int main()
	{
		priority_queue<int> myPriorityQueue ;

		// creat priority_queue
		myPriorityQueue.push(5) ;
		myPriorityQueue.push(3) ;
		myPriorityQueue.push(2) ;
		myPriorityQueue.push(4) ;
		myPriorityQueue.push(1) ;

		// print priority_queue
		while(!myPriorityQueue.empty()) 
		{
			cout<<myPriorityQueue.top()<<” “  ;
			myPriorityQueue.pop() ;
		}
		return 0;
	}
	Ta cho vào priorty_queue là 5,3,2,4,1 không được sắp xếp
	In ra kết quả, ta có thứ tự giảm dần 5,4,3,2,1 (Độ ưu tiên là in số lớn nhất, vì độ ưu tiên mặc định là less).
*/