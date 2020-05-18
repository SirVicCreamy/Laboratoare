#ifndef QUEUE_H
#define QUEUE_H
template<class T>
class Queue
{   public:
    Queue(int = 10);
    ~Queue()
    {
        delete[] queuePtr;
    }
    bool push(const T&);
    bool pop(T&);
    private:
    int size;
    int prim;
    int ult;
    T* queuePtr;
    bool isEmpty() const
    {
        return prim == -1;
    }
    bool isFull() const
    {
        return ult == size-1;
    }
};

template<class T>
Queue<T>::Queue(int s)
{
    size = s > 0 ? s : 10;
    prim = -1;
    ult=-1;
    queuePtr = new T[size];
}

template<class T>
bool Queue<T>::push(const T& pushValue)
{
    if(!isFull())
    {   prim=0;
        queuePtr[++ult] = pushValue;
        return true;
    }
    return false;
}


template<class T>
bool Queue<T>::pop(T& popValue)
{
    if(!isEmpty() && prim<=ult)
    {
        popValue = queuePtr[prim++];
        return true;
    }
    return false;
}
#endif // QUEUE_H
