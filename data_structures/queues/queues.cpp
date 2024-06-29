#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    std::cout << "Queue size: " << q.size() << std::endl;

    //Get front element in queue
    std::cout << "Front element: " << q.front() << std::endl;

    //Dequeue the first element in queue
    std::cout << "Dequeuing " << std::endl;
    q.pop();

    std::cout << "Queue size: " << q.size() << std::endl;

    return 0;
}
