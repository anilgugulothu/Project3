#include <iostream>
#include "Sorting.h"
#include <vector>
#include <fstream>
using namespace std;

int main(){
	//Reads numbers into a vector called numbers
	vector<int> numbers;
	ifstream in("random.dat", ios::in);
	//ifstream in("inorder.dat", ios::in);
	//ifstream in("reverse.dat", ios::in);
	int number;
	while(in >> number){
		numbers.push_back(number);
	}
	in.close();

	//Sorting* sort = new Sorting();

	//int size = numbers.size();
	Sorting* sort = new Sorting();
	int* newNumbers;
	for(int i=0; i<numbers.size(); i++){
		newNumbers[i] = numbers[i];
	}
	sort->selectionSort(newNumbers, (int)numbers.size());

	cout << "NUMBERS";
	for(int i=0; i<numbers.size(); i++){
		cout << numbers[i] << endl;
	}






	return 0;
}