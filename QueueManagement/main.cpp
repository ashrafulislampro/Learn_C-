#include <iostream>
using namespace std; 

class Queue { 
	int size; 
	int* queue; 
	
	public:
	Queue() { 
		size = 0;
		queue = new int[100];
	}
	void add(int data) { 
		queue[size] = data; 
		size++;
	}

	void remove() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		else { 
			for (int i = 0; i < size - 1; i++) { 
				queue[i] = queue[i + 1]; 
			} 
			size--; 
		} 
	} 
	void print() { 
		if (size == 0) { 
			cout << "Queue is empty"<<endl; 
			return; 
		} 
		for (int i = 0; i < size; i++) { 
			cout<<queue[i]<<" <- ";
		} 
		cout << endl;
	}
	//your code goes here
	Queue operator+(const Queue &obj) const {
		Queue res;
       
        // Copy elements from the first queue
        for(int i = 0; i < this->size; i++){
            
            res.add(this->queue[i]);
        }
        cout << " obj.size " << obj.size<< endl;
        // Copy elements from the second queue
        for(int i = 0; i < obj.size; i++){
            cout << i << " obj.size " << obj.size << res.add(obj.queue[i])<< endl;
            // res.add(obj.queue[i]);
        }

		return res;
	}
	
}; 

int main() { 
	Queue q1; 
	q1.add(42); q1.add(2); q1.add(8);  q1.add(1);
    // q1.print();
	Queue q2;
	q2.add(3); q2.add(66); q2.add(128);  q2.add(5);
    // q2.print();

	Queue q3 = q1+q2;
	q3.print();

	return 0; 
} 
