#include <vector>
#include "Sorting.h"
using namespace std;

Sorting::Sorting(){

}

void Sorting::selectionSort(&vector<int> numbers, int length){
	int minPos, temp;
	for(int i=0; i<length-1; i++){
		minPos = i;
		for(int j = i+1; j<n; j++){
			if(numbers[j] < numbers[minPos]){
				minPos = j;
			}
		}
		if(minPos != i){
			temp = numbers[i];
			numbers[i] = numbers[minPos];
			numbers[minPos] = temp;
		}
	}
}

void Sorting::bubbleSort(&vector<int> numbers, int length){




}

void Sorting::insertionSort(&vector<int> numbers, int length){




}

void Sorting::mergeSort(&vector<int> numbers, int length){




}

void Sorting::quickSort(&vector<int> numbers, int length){




}

void Sorting::heapSort(&vector<int> numbers, int length){




}