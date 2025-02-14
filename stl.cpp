#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

void ft_pair()
{
	pair<int, int> p = {1, 3};
	cout << p.first << " " << p.second;
	cout << endl;

	pair<int, pair<int,int>> p2 = {1, {3 , 4}};
	cout << p2.first << " " << p2.second.first << " " << p2.second.second;
	cout << endl;

	pair<int, int> arr[] = {{1,2}, {2,5}, {4, 8}};
	cout << arr[0].first;
}

void ft_vector()
{
	//Create an empty container 
	vector <int> v; // {}
	v.push_back(1); // {1} 
	v.push_back(2); // {1} 
	v.push_back(3); // {1} 
	// v.emplace_back(4); //{1, 2} //similar to push back but faster than push back

	cout << v.back() << endl; // 3
	//Iterator
	vector<int>::iterator it_begin  = v.begin();
	vector<int>::iterator it_end  = v.end(); //This one point to the memory location after 3 we need to minus 1 to get the last digit
	it_end--;
	cout << *(it_begin) << " "; // 1
	cout << *(it_end) << " " << endl; // 3

	//printing out vector in a loop

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *(it)  << " ";
	cout << endl;
	for (auto it = v.begin(); it != v.end(); it++)
		cout<< *(it) << " ";
	cout << endl;
	for (auto it: v)
		cout<< it << " ";
	cout << endl;

	//Erase
	v.erase(v.begin() + 1);
	cout << "Erase at index 1: ";
	for (auto it : v)
		cout << it << " ";
	cout << endl;
	/*
	{10, 20, 30, 40, 50, 60}
	v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 60}
	*/

	//Insert
	cout << "Insert\n";
	vector<int> v_insert(3, 10); // {10 , 10, 10}
	v_insert.insert(v_insert.begin(), 30); // {30, 10, 10, 10}
	for (auto it = v_insert.begin(); it != v_insert.end(); it++)
		cout << *(it) << " ";
	cout << endl;

	v_insert.insert(v_insert.begin() + 1, 2, 50); // {30, 50, 50 10, 10, 10}
	for (auto it = v_insert.begin(); it != v_insert.end(); it++)
		cout << *(it) << " ";
	cout << endl;

	vector<int> v_copy(2, 80);
	v_insert.insert(v_insert.begin(), v_copy.begin(), v_copy.end()); // {80, 80, 30, 50, 50 10, 10, 10}
	for (auto it = v_insert.begin(); it != v_insert.end(); it++)
		cout << *(it) << " ";
	cout << endl;
	cout << "Size: "  << v_insert.size() << endl;

	//Vector and pair
	vector <pair<int, int>> vec;
	vec.push_back({1, 2});
	// cout << vec[0].first << " " << vec[0].second << endl; // 1 , 2
	vec.emplace_back(1, 2);
	// cout << vec[0].first << " " << vec[0].second << endl; // 1 , 2

	//Create n of the same number in arr
	vector<int> V(3,100); // {100, 100, 100}
	vector<int> V2(v); // {100, 100, 100}
	vector<int> V3(5); // {0, 0 ,0, 0, 0}

}

void ft_stack()
{
	//LIFO: Last in first out
	stack<int> st;
	st.push(1); // {1}
	st.push(2); // {2, 1}
	st.push(3); // {3, 2, 1}
	st.push(4); // {4, 3 ,2, 1}
	st.emplace(5); // {5, 3, 3, 2, 1}

	cout << st.top() << endl; // 5
	st.pop();
	cout << st.top() << endl; //4

	stack <int> st1, st2;
}

void ft_q()
{
	//FIFO: First in first out
	queue<int> q;
	queue<int> temp;
	q.push(1); // {1}
	q.push(2); // {1, 2}
	q.push(3); // {1, 2, 3}
	q.push(4); // {1, 2, 3, 4}
	q.emplace(5); // {1, 2, 3, 5}

	temp = q;
	while (!temp.empty())
	{
		cout << temp.front() << " ";
		temp.pop();
	}
	cout << endl;
	q.back() += 5;
	cout << "Back + 5: ";
	cout << q.back() << endl; // 5 + 5 = 10

	cout << "Front: ";
	cout << q.front() << endl; // 1

	cout << "FIFO: ";
	q.pop();
	cout << q.front() << endl; // 2
}

void ft_priority_q()
{
	// largest number always on top for max heap
	priority_queue<int> max_pq;
	queue<int> temp;
	max_pq.push(5); // {5}
	max_pq.push(2); // {5, 2}
	max_pq.push(8); // {8, 5, 2}
	max_pq.emplace(10); // {10, 8, 5, 2}

	max_pq.pop(); // 10 will come out 
	cout << max_pq.top(); // 8

	// min always on top: min heap
	priority_queue<int, vector<int>, greater<int>> min_pq;
	min_pq.push(5); // {5}
	min_pq.push(2); // {2, 5}
	min_pq.push(8); // {2, 5 , 8}
}

void ft_set()
{
	//It need to have unique value and sorted
	set<int>st;
	st.insert(1); // {1}
	st.emplace(2); // {1, 2}
	st.insert(2); // {1, 2}
	st.insert(4); // {1, 2, 4}
	st.insert(3); // {1, 2, ,3, 4}

	auto it1 = st.find(3);
	auto it2 = st.find(6);
	st.erase(it1, it2);
}

void ft_multiset()
{
	//Only sorted and can have to same number
	multiset<int>ms;
	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	ms.erase(1); // all 1 are erased
}

void ft_map()
{
	map<int, int> mpp1;
	mpp1[1] = 2;
	mpp1.insert({2, 4});
	mpp1.emplace(3, 1);
	map<int, pair<int, int>>mpp2;
	map<pair<int, int>, int>mpp3;
}
