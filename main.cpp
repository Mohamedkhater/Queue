#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
const int MAX_SIZE =4;
struct queue {
    int frnt=-1;
    int rear=-1;
    int qu[MAX_SIZE];
    int sIze=0;

};
bool IsFull(queue &qq){
    return qq.sIze==MAX_SIZE;
}
bool IsEmpty(queue &qq){
    return qq.sIze==0;
}

void Enqueue(queue &qq,int val){
    if(IsFull(qq)){
        cout << "the queue is full"<<endl;


    }
    else{
        if (IsEmpty(qq)){
            qq.qu[++qq.frnt]=val;

        }
        qq.qu[++qq.rear]=val;
        qq.sIze ++;

    }

}
int Dequeue(queue &qq){
    if (!IsEmpty(qq)){
        qq.sIze --;
        int x= qq.qu[qq.frnt];
        qq.frnt=(qq.frnt+1)%MAX_SIZE;
        return x;


    }
    else{
        cout << "you cant deueue from and empty queue"<<endl;
    }
}

int GetRear(queue &qq){
    return qq.qu[qq.rear];
}
int GetFront(queue &qq){
    return qq.qu[qq.frnt];
}

int main (int argc , char** argv){
    queue myqueue;

    Enqueue(myqueue,4);
    Enqueue(myqueue,3);
    cout << "front is: "<<myqueue.qu[myqueue.frnt]<<endl;
    cout <<"rear is: "<< myqueue.qu[myqueue.rear]<<endl;
    Enqueue(myqueue,6);
    Enqueue(myqueue,10);



    cout <<"front is: "<< myqueue.qu[myqueue.frnt]<< endl;
    cout << "rear is: "<< myqueue.qu[myqueue.rear]<< endl;

    int x=Dequeue(myqueue);
    cout <<"front is:      "<< myqueue.qu[myqueue.frnt]<< endl;
    x=Dequeue(myqueue);
    cout <<"front is:         "<< myqueue.qu[myqueue.frnt]<< endl;

    x=Dequeue(myqueue);
    cout <<"front is:         "<< myqueue.qu[myqueue.frnt]<< endl;

    //x=Dequeue(myqueue);
    cout <<"front is:           "<< myqueue.qu[myqueue.frnt]<< endl;


    cout <<"front is:  "<< myqueue.qu[myqueue.frnt]<< endl;
    cout << "rear is: "<< myqueue.qu[myqueue.rear]<< endl;
    x=Dequeue(myqueue);
    cout << "front is: "<< myqueue.qu[myqueue.frnt]<<endl;




    return 0;
}