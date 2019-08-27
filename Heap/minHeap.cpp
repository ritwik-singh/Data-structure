#include <bits/stdc++.h>
using namespace std;

class minHeap{

	int n;
	int size;
	int *heap;

	public :
		minHeap(int n);

		void minHeapify(int );

		int extractMin();

		void deleteKey(int i);

		void insertKey(int k);

		void decreaseKey(int i, int val);

		int left(int i);

		int right(int i);

		int parent(int i);

		int getMin();

};

minHeap::minHeap(int capacity)
{
	size = 0;
	n =capacity;
	heap = new int[capacity];
}


minHeap::decreaseKey(int i,int val)
{
	heap[i] = val;
	while(i != 0 && heap[parent(i)] > heap[i])
	{
		swap(&heap[i], &heap[parent(i)])
		i = parent(i);
	}
}

minHeap::minHeapify(int i)
{

}

minHeap::extractMin()
{

}

minHeap::deleteKey()
{
	decreaseKey(i,INT_MIN);
	extractMin();
}

minHeap::insertKey()
{
	if(size == n)
	{
		cout<<"Heap Overflow\n";
		return;
	}	

	size++;
	int i = size - 1;
	heap[i] = k;

	while(i!=0 && heap[parent(i)] > heap[i])
	{
		swap(&heap[i],&heap[parent(i)]);
		i = parent(i);
	}


}


minHeap::left(int i)
{
	return (2*i+1);
}

minHeap::right(int i)
{
	return (2*i+2);
}

minHeap::parent(int i)
{
	return (i-1)/2;
}

minHeap::getMin()
{
	return heap[0];
}

int main()
{
	return 0;
}
