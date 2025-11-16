#include <iostream>
using namespace std;

// #################################### PAIRS ####################################

// void pairs()
// {
//     pair<int, int> p = {1, 3};

//     cout << p.first << " " << p.second << endl;

//     pair<int, pair<int, int>> p1 = {1, {3, 4}};

//     cout << p.first << " " << p1.second.second << " " << p1.second.first << endl;

//     pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

//     cout << arr[1].second << endl;
// }

// int main()
// {
//     pairs();
// }

// #################################### VECTORS ####################################

// #include <vector>
// void vectors()
// {
//     vector<int> v;
//     v.push_back(1);    // push in the end of the vector
//     v.emplace_back(2); // more efficient way of inserting in the vector

//     // vector can be of any type
//     vector<pair<int, int>> vec;
//     vec.push_back({1, 2});
//     vec.emplace_back(1, 2); // it automatically assumes its an pair

//     vector<int> v(5, 100); // it will create an vector {100,100,100,100,100}

//     vector<int> v(5); // it will create an vector {0,0,0,0,0}

//     vector<int> v1(5, 20); // it will create an vector {20,20,20,20,20}
//     vector<int> v2(v1);    // it will create an vector {20,20,20,20,20}

//     // accessing the elements of vector
//     vector<int>::iterator it = v.begin(); // it points to the begining of the vector memory not the element.

//     it++;
//     cout << *(it) << " "; // it will print the 2nd element , without "*" it will only print the memmory address.

//     it = it + 2;
//     cout << *(it) << " ";

//     vector<int>::iterator it = v.end();     // .end will point the memory of the vector element after the last element of the vector, eg. {2,31,44,1,23} it will point after this vector around {2,31,44,1,23}(here)
//     vector<int>::iterator it2 = v.rend();   // reverse end ,never used
//     vector<int>::iterator it3 = v.rbegin(); // reverse begin ,never used

//     cout << v[0] << " " << v.at(0); // print the element at the index 0

//     cout << v.back() << " "; // it will print 30 if the vector is {10,20,30}

//     // looping to print the whole vector
//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//     {
//         cout << *(it) << " ";
//     }

//     // shortcut for looping
//     for (auto it = v.begin(); it != v.end(); it++)
//     {
//         cout << *(it) << " ";
//     }

//     // for each loop
//     for (auto it : v)
//     {
//         cout << it << " ";
//     }

//     // Removing the element from the vector

//     //{10,20,12,23}
//     v.erase(v.begin() + 1); // it will remove the element 20,new vector will be {10,12,23}

//     //{10,20,12,23,35}
//     v.erase(v.begin() + 2, v.begin() + 4); //  it will remove the elements (12,23), new vector will be  {10,20,35},[start,end) where start element is included and end element is not.

//     // Insertig the element in the vector

//     vector<int> v(2, 100);          // {100,100}
//     v.insert(v.begin(), 300);       //{300,100,100}
//     v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

//     vector<int> copy(2, 50);                       //{50,50}
//     v.insert(v.begin(), copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

//     // Others

//     //{10,20}
//     cout << v.size(); // 2

//     //{10,20}
//     v.pop_back(); //{10} remove 20

//     // v1 -> {10,20}
//     // v2 ->{30,40}
//     v1.swap(v2); // v1 -> {30,40},v2 -> {10,20}

//     v.clear(); // erases the entire vector

//     cout << v.empty(); // retrun true/false , is vector empty or not.
// }

// #################################### LIST ####################################

// #include <list>

// void lists()
// {
//     list<int> ls;

//     ls.push_back(2);    //{2}
//     ls.emplace_back(4); //{2,4}

//     ls.push_front(5);    //{5,2,4}
//     ls.emplace_front(3); //{3,5,2,4}

//     // rest functions same as vector
//     // begin, end, rbegin, rend, clear, insert, size, swap etc.
// }

// #################################### DEQUE ####################################

// #include <deque>
// void Deques()
// {
//     deque<int> dq;
//     dq.push_back(1);     // {1}
//     dq.emplace_back(2);  // {1,2}
//     dq.push_front(4);    // {4,1,2}
//     dq.emplace_front(3); // {3,4,1,2}

//     dq.pop_back();  // {3,4,1}
//     dq.pop_front(); // {4,1}

//     dq.back();

//     dq.front();

//     // rest functions same as vector
//     // begin, end, rbegin, rend, clear, insert, size, swap
// }

// #################################### STACK ####################################

// #include <stack>
// void Stacks()
// {
//     stack<int> st;
//     st.push(1);    // {1}
//     st.push(2);    // {2,1}
//     st.push(3);    // {3,2,1}
//     st.push(3);    // {3,3,2,1}
//     st.emplace(5); // {5,3,3,2,1}

//     cout << st.top(); // prints 5

//     st.pop(); // {3,3,2,1} remove the top element

//     cout << st.top(); // 3
//     cout << st.size();
//     cout << st.empty(); // give bool for is stack empty or not

//     stack<int> st1, st2;
//     st1.swap(st2);
// }

// #################################### QUEUE ####################################

// #include <queue>

// void Queues()
// {
//     queue<int> q;
//     q.push(1);    // {1}
//     q.push(2);    // {1,2}
//     q.emplace(4); // {1,2,4}

//     q.back() += 5;

//     cout << q.back(); // prints 9

//     // Q is {1,2,9}
//     cout << q.front(); // prints 1
//     q.pop();           //{2,9}

//     cout << q.front(); // prints 2
//     // size swap empty same as stack
// }

// #################################### PRIORITY QUEUE ####################################

// #include <queue>

// void PQueues()
// {
//     priority_queue<int> pq;
//     pq.push(5);     // {5}
//     pq.push(2);     // {5,2}
//     pq.push(8);     // {8,5,2}
//     pq.emplace(10); // {10,8,5,2}

//     cout << pq.top(); // prints 10

//     pq.pop(); //{8,5,2}

//     // size swap empty same as stack

//     // Minimum Heap
//     priority_queue<int, vector<int>, greater<int>> pq;
//     pq.push(5);     // {5}
//     pq.push(2);     // {2,5}
//     pq.push(8);     // {2,5,8}
//     pq.emplace(10); // {2,5,8,10}

//     cout << pq.top(); // prints 2
// }

// #################################### SET ####################################

// #include <set>
// void Sets()
// {
//     set<int> st;
//     st.insert(1);  // {1}
//     st.emplace(2); // {1, 2}
//     st.insert(2);  // {1, 2}
//     st.insert(4);  // {1, 2, 4}
//     st.insert(3);  // {1, 2, 3, 4}

//     // Functionality of insert in vector
//     // can be used also, that only increases
//     // efficiency
//     // begin(), end(), rbegin(), rend(), size
//     // empty() and swap() are same as those

//     // {1, 2, 3, 4, 5}
//     auto it = st.find(3); // it will return an iterator which will points to the 3

//     // {1, 2, 3, 4, 5}
//     auto it = st.find(6); // it will return set.end()

//     // {1, 4, 5}
//     st.erase(5); // erases 5 // takes logarithmic

//     int cnt = st.count(1); // returns the count of the given element

//     auto it = st.find(3);
//     st.erase(it); // it takes constant time

//     // {1, 2, 3, 4, 5}
//     auto it1 = st.find(2);
//     auto it2 = st.find(4);
//     st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

//     // lower_bound() and upper_bound() function works in the same way
//     // as in vector it does.

//     // This is the syntax
//     auto it = st.lower_bound(2);
//     auto it = st.upper_bound(3);
// }

// #################################### MULTI SET ####################################

// #include <set>
// void MultiSets()
// {
//     // Everything is same as set
//     // only stores duplicate elements also

//     multiset<int> ms;
//     ms.insert(1); // {1}
//     ms.insert(1); // {1, 1}
//     ms.insert(1); // {1, 1, 1}

//     ms.erase(1); // all 1's erased

//     int cnt = ms.count(1);

//     // only a single one erased
//     ms.erase(ms.find(1));
//     ms.erase(ms.find(1),ms.find(1)+2);

//     // rest all function same as set
// }

// #################################### UNORDERD SET ####################################

// #include <unordered_set>
// void unordered_set()
// {
//     unordered_multiset<int> st;
//     // Lower_bound and upper_bound function
//     //  does not works, rest all functions are same
//     //  as above, it does not stores in any
//     //  particular order it has a better complexity
//     //  than set in most cases, except some when collision happens
// }

// #################################### MAP ####################################

// #include <map>
// void Maps()
// {
//     map<int, int> mpp;

//     map<int, pair<int, int>> mpp;

//     map<pair<int, int>, int> mpp;

//     mpp[1] = 2;
//     mpp.emplace({3, 1});

//     mpp.insert({2, 4});
//     mpp[{2, 3}] = 10;

//     //     {
//     // {1, 2}
//     // {2, 4}
//     // {3, 1}
//     // }
//     for (auto it : mpp)
//     {
//         cout << it.first << " " << it.second << endl;
//     }
//     cout << mpp[1];
//     cout << mpp[5];

//     auto it = mpp.find(3);
//     cout << *(it).second;

//     auto it = mpp.find(5);
//     // This is the syntax
//     auto it = mpp.lower_bound(2);
//     auto it = mpp.upper_bound(3);
//     // erase, swap, size, empty, are same as above
// }

// #################################### MULTI MAP ####################################
// #include <map>
// void Multimaps()
// {
//     multimap<int, int> mm;
//     // everthing is same as map,only it can store multiple keys.
//     // only map[key] cannot be used here
// }

// #################################### UNORDERED MAP ####################################
// #include <unordered_map>

// void UnorderedMap()
// {
//     unordered_map<int,int> um;
//     // same as set and unordered_set difference
// }

// ################################################################################
// ################################################################################
// ################################################################################
// ################################################################################
// ################################################################################
// #################################### EXTRAS ####################################

#include <algorithm>

void explainExtra()
{
    sort(a, a + n);           // sorting for array where "a" is starting iterator and "a+n" is ending iterartor
    sort(v.begin(), v.end()); // sorting for vectors

    sort(a + 2, a + 4); // to sort an subset of an array/vector

    sort(a, a + n, greater<int>); // sort in decending order

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it according to second element
    // if second element is same, then sort
    // it according to first element but in descending

    sort(a, a + n, comp); // where comp is an self writtern comparator (an boolean return function)

    // example of comp
    // bool comp(pair<int, int> p1, pair<int, int> p2)
    // {
    //     // 1. Primary Sort: Sort by the 'second' element (ascending)
    //     if (p1.second < p2.second)
    //     {
    //         return true; // p1 comes before p2
    //     }
    //     // 2. Tie-Breaker: If 'second' elements are equal...
    //     else if (p1.second == p2.second)
    //     {
    //         // ...sort by the 'first' element (descending)
    //         if (p1.first > p2.first)
    //         {
    //             return true; // p1 comes before p2
    //         }
    //     }

    //     // In all other cases, p1 comes after p2
    //     return false;
    // }

    int num = 7;
    int cnt = _builtin_popcount();

    long long num = 165786578687;
    int cnt = __builtin_popcountll();

    string s = "123";

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
}