#include <iostream>

using namespace std;
int le(int n){
	int kq = 1;
    for (int i = n; i >= 1; i -= 2) {
        kq *= i;
    }
    return kq;
	}
int main(){
	int n,kq;
	cin>>n;
	kq=le(n);
	cout<< kq;
	return 0;
}
