#include <bits/stdc++.h>
using namespace std;

class minHeap{

	int n;
	int size;

	public :
		minHeap(int capacity);

		void minHeapify(int );

		int extractMin();

		void deleteKey(int i);

		void insertKey(int k);

		int left(int i);

		int right(int i);

		int parent(int i);

};


int main()
{
	return 0;
}
