#include <iostream>

using namespace std;
float Diem4(float diem10) {
    if (diem10 >= 9.0) return 4.0;
    else if (diem10 >= 8.0) return 3.5;
    else if (diem10 >= 7.0) return 3.0;
    else if (diem10 >= 6.0) return 2.5;
    else if (diem10 >= 5.0) return 2.0;
    else if (diem10 >= 4.0) return 1.5;
    else return 1.0;
}
const char* DiemChu(float diem10) {
    if (diem10 >= 9.0) return "A+";
    else if (diem10 >= 8.0) return "A";
    else if (diem10 >= 7.0) return "B+";
    else if (diem10 >= 6.0) return "B";
    else if (diem10 >= 5.0) return "C";
    else if (diem10 >= 4.0) return "D";
    else return "F";}
int main(){
	float diem10,diem4;
	char diemchu[10];
	cin>>diem10;
	cout<<"diem 4:"<<Diem4(diem10)<<endl;
	cout<<"diem chu:"<<DiemChu(diem10)<<endl;

	return 0;
}
