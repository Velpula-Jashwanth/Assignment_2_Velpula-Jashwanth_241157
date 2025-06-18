#include <iostream>
#include <vector>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	vector<string> A(num);
	for(int i=0;i<num;i++){
		cin >> A[i];
	}
	
    for (int i=0; i<num; i++) {
        int ct = 0;
        for (int j = 0; j < i; ++j) {
            if (A[j] < A[i]) ct++;
        }
        cout<<ct<<endl;
    }
    
}
