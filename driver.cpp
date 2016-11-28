#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){

	vector<int> randomNumbers;
	ifstream in("random.dat", ios::in);
	int number;
	while(in >> number){
		randomNumbers.push_back(number);
	}
	in.close();

	cout << "Numbers :" << endl;
	for(int i=0; i<randomNumbers.size(); i++){
		cout << randomNumbers[i] << endl;
	}






	return 0;
}