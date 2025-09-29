#include <iostream>
#include <cmath>
using namespace std;
float dientich(float a,float b ,float c){
	float p , S;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	return S;
}
void tamgiac(float a,float b ,float c){
	if (a + b > c and a + c > b and b + c > a){
		if (a*a + b*b == c*c or a*a + c*c == b*b or b*b + c*c == a*a){
			if (a==b or a==c or b==c){
			cout<<"Tam giac vuong can!";
		}
			else{
			
				cout<<"Tam giac vuong!";
		}}
		else if (a==b and a==c){
			cout<<"Tam giac deu!";
		}
		else if (a==b or a==c or b==c){
			cout<<"Tam giac can";
		}
		else {
			cout<<"Tam giac thuong";
		}
	}
	else {
		cout<<"Khong phai tam giac";}}
	int main(){
	float a,b,c,S;
	cin>>a;
	cin>>b;
	cin>>c;
	tamgiac(a,b,c);

	S=dientich(a,b,c);
	if (S > 0 && !isnan(S)) {
	
	cout<<"  co dien tich = "<<S<<endl;
	}
	return 0;
}
