#include<iostream>

using namespace std;

inline int min(int a, int b, int c) {
if((a<b) && (a<c)){
	return a;
}
else if(b<c){
	return b;
}
else{
	return c;
}
}

inline int max(int a, int b, int c) {
if((a>b) && (a>c)){
	return a;
}
else if(b>c){
	return b;
}
else{
	return c;
}
}

int main() {
	cout << "Max : " << max(12, 57, 27) << "\n";
	cout << "Min : " << min(43534, 435 ,45) << '\n';
	return 0;
}