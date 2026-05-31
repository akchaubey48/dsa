#include<iostream>
using namespace std;

class heap{
public:
    int arr[100];
    int size;

    heap(){
        size = 0;
        arr[0] = -1; // dummy for 1-based indexing
    }

    void insert(int data){
        size++;
        int i = size;
        arr[i] = data;

        while(i > 1){
            if(arr[i/2] < arr[i]){
                swap(arr[i/2], arr[i]);
                i = i/2;
            } else {
                return;
            }
        }
    }

    void deleteNode(){
        if(size == 0){
            cout << "heap is empty" << endl;
            return;
        }

        // Move last element to root
        arr[1] = arr[size];
        size--;

        // Heapify down
        int i = 1;
        while(i <= size){
            int left = 2*i;
            int right = 2*i + 1;
            int largest = i;

            if(left <= size && arr[left] > arr[largest])
                largest = left;

            if(right <= size && arr[right] > arr[largest])
                largest = right;

            if(largest != i){
                swap(arr[i], arr[largest]);
                i = largest;
            } else {
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

// Heapify function
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    if(left <= n && arr[left] > arr[largest])
        largest = left;

    if(right <= n && arr[right] > arr[largest])
        largest = right;

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// Heap Sort
void heapsort(int arr[], int n){
    int t = n;
    while(t > 1){
        swap(arr[1], arr[t]);
        t--;
        heapify(arr, t, 1); // FIXED
    }
}

int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.deleteNode();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    // Build heap
    for(int i = n/2; i > 0; i--){
        heapify(arr, n, i);
    }

    // Heap sort
    heapsort(arr, n);

    // Print sorted array
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}