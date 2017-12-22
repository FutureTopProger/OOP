#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include "queue_item.h"

template <class T>
class Queue
{
public:
	Queue();
	~Queue();

	void push(const std::shared_ptr<T>& item);
	void pop();
	unsigned int size() const;
	std::shared_ptr<T> front() const;

	template <class K>
	friend std::ostream& operator << (std::ostream& os, const Queue<K>& queue);

private:
	std::shared_ptr<QueueItem<T>> m_front;
	std::shared_ptr<QueueItem<T>> m_end;
	unsigned int m_size;
};

#include "queue_impl.cpp"

#endif
