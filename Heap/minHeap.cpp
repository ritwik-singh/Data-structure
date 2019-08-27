/*
	* @author [Ritwik Singh]
 	* @created date 2019-08-26 08:30:15
 	* @modified date 2019-08-27 08:58:45
 	* @desc [description]
*/

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


void minHeap::decreaseKey(int i,int val)
{
	heap[i] = val;
	while(i != 0 && heap[parent(i)] > heap[i])
	{
		swap(&heap[i], &heap[parent(i)])
		i = parent(i);
	}
}

void minHeap::minHeapify(int i)
{
		int l = left(i);
		int r = right(i);
		int smallest;
		if(l < size && heap[l] < heap[i])
			smallest = l;
		else
			smallest = i;
		if(r < size && heap[r] < heap[smallest])
			smallest = r;

		if(smallest != i)
		{
			swap(&heap[i],&heap[smallest]);
			minHeapify(smallest);
		}		 
}	

int minHeap::extractMin()
{
	if(size <= 0)
		return INT_MAX;
	if(size == 1)
	{
		size--;
		return heap[0];
	}	 

	int root  = heap[0];
	heap[0] = heap[size-1];
	size--;
	minHeapify(0);

	return root;
}

void minHeap::deleteKey()
{
	decreaseKey(i,INT_MIN);
	extractMin();
}

void minHeap::insertKey()
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


int minHeap::left(int i)
{
	return (2*i+1);
}

int minHeap::right(int i)
{
	return (2*i+2);
}

int minHeap::parent(int i)
{
	return (i-1)/2;
}

int minHeap::getMin()
{
	return heap[0];
}

int main()
{
	return 0;
}
