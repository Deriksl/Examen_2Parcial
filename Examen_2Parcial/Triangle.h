#pragma once
#ifndef TRIAGE_H
#define TRIAGE_H

#include <string>

class LStack{
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* topNode;

public:
    LStack();
    ~LStack();

    void Push(int value);
    void Pop();
    int Top();
    bool IsEmpty();
};

class LQueue{
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* frontNode;
    Node* backNode;

public:
    LQueue();
    ~LQueue();

    void Enqueue(int value);
    void Dequeue();
    int Front();
    int Back();
    bool IsEmpty();
};


class Triangle{
private:
    struct Patient {
        std::string name;
        int urgency;
    };

    LQueue urgencyQueues[5];

public:
    Triangle();

    void AddPatient(int urgency, std::string patient_name);
    void PassPatient();
    void Print();
};

#endif

