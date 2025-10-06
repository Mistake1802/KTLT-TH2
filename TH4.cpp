#include <iostream>

using namespace std;
float tinh(float tg , float ls , float th){
	for (int i =1 ;i<=th ; i++){
		tg=tg+tg*ls/100;
	}
	return tg;
	
}
int main(){
	float tg,ls,th,tien;
	cout<<"tien gui:";
	cin>>tg;
	cout<<"thang:";
	cin>>th;
	cout<<"lai suat:";
	cin>>ls;
	tien=tinh(tg,ls,th);
	cout<<tien;
	return 0;
}
