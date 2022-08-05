#include<iostream>
#include<queue>
#include<stack>

using namespace std;

//Problem 1: Reverse a queue using a stack
/*
● Implement a function that reverses a queue. Use a stack for this propose.
● void reverse_queue(queue<int>& q)
*/

//Hint
//stack is actually used most to reversing data

void reverse_queue(queue<int>& q) {

	//the idea : Push the queue to the stack then push the stack to the queue then the reverse will be done automatically. why ?
	//because the stack by default makes the last element as our first element

	stack<int> s;

	while(!q.empty())
		s.push(q.front()) , q.pop(); //1,2,3

	while(!s.empty())
		q.push(s.top()) , s.pop();

}

int main_8_6() {

	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);

	reverse_queue(q);

	while(!q.empty())
		cout<<q.front()<<" ", q.pop();

	return 0;
}




