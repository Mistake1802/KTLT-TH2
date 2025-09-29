#include <iostream>

using namespace std;
float tiendien(float diensd) {
    if (diensd >=401 ) return diensd*2.420;
    else if (diensd >= 301) return diensd*2.361;
    else if (diensd >= 201) return diensd*2.210;
    else if (diensd >= 151) return diensd*2.044;
    else if (diensd >= 101) return diensd*1.622;
    else return diensd*1.418;
}
int main(){
	float thangnay , thangtruoc,diensd;
	cin>>thangnay;
	cin>>thangtruoc;
	diensd=thangnay-thangtruoc;
	cout<<"tien dien:"<<tiendien(diensd)<<endl;
	return 0;
}
