#include <iostream>

using namespace std;
int laSoNguyenTo(int n) {
    if (n < 2) return 0; 
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return 0; 
    }
    return 1;
}
int main(){
	int n,m,so;
	cin>>n;
	cin>>m;
	so=0;
	for (int i=n;i<m;i++){
		if(laSoNguyenTo(i)==1){
			so=so+1;
		}
	}
	cout<<so;
	return 0;
}
