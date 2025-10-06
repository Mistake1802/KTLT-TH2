#include <iostream>

using namespace std;
float tinh(float tg , float ls , float tn){
	int th=0;
	while (tg<tn){
		tg=tg+tg*ls/100;
		th=th+1;
	}
	return th;	
}
int main(){
	float tg,ls,th,tn;
	cout<<"tien gui:";
	cin>>tg;
	cout<<"tien nhan:";
	cin>>tn;
	cout<<"lai suat:";
	cin>>ls;
	th=tinh(tg,ls,tn);
	cout<<th;
	return 0;
}
