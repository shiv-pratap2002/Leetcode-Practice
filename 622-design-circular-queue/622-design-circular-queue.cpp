class MyCircularQueue {
public:
    vector<int>v;
    int front = -1;
    int rear = -1;
    int size;
    MyCircularQueue(int k) {
        size = k;
        for(int i = 0;i<k;i++)
        {
            v.push_back(0);
        }
    }
    
    bool enQueue(int value) {
        if((front==0 and rear == size-1) or (front == (rear+1)%(size)))
        {
            return false;
        }
        else if(front==-1)
        {
            front = rear = 0;
            v[rear] = value;
        }
        else if(front!=0 and rear == size-1)
        {
            rear = 0;
            v[rear] = value;
        }
        else
        {
            v[++rear] = value;
        }
        return true;
    }
    
    bool deQueue() {
        if(front==-1)
        {
            return false;
        }
        if(front==rear)
        {
            front=rear=-1;
        }
        else if(front == size-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
        return true;
    }
    
    int Front() {
        if(front==-1)
        {
            return -1;
        }
        return v[front];
    }
    
    int Rear() {
        if(rear==-1)
        {
            return -1;
        }
        return v[rear];
    }
    
    bool isEmpty() {
        return (front == -1 and rear == -1);
    }
    
    bool isFull() {
        return ((rear+1)%size==front);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */