#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> myQ;
    for(int i = 0; i < 4; i++)
    {
         cout << "enqueuing " << i <<endl;
         myQ.push(i);
    }
    cout << "size of the queue: " << myQ.size() << endl;
    cout << "the back of the queue: " << myQ.back() << endl;
    while(!myQ.empty())
    {
        cout << "dequeuing " << myQ.front() << endl;
        myQ.pop();
    }
}


