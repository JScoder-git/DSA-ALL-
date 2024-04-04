#include <bits/stdc++.h>

using namespace std;

class s{
public:
	int age;
	void getnum(int a){
		age = a;
	}
	void put(){
		cout<<"Age of person : "<<age;
	}
};

class height:virtual public s{
public:
	int hc,hm;
	void geth(int x,int y){
		hc = x;
		hm = y;
    }
    void puth(){
    	cout<<"Height in centimeters : "<<hc<<endl<<"Height in feet : "<<hm;
    }
};

class weight{
 public:
 	int w;
 	void input(int x){
 		w = x;
 	} 

 	void output(){
 		cout<<"Weight of student : "<<w<<"Kg"<<endl;
 	}
};	

class final:public height , public pAge{
 public:
 		int total;
 		void display(){
 			total = hc+hm+w;
 			put();
 			puth();
 			output();
 		}
};

int main() {
	result s;
	s.getnum(18);
	s.geth(177,5);
	s.input(75);
	s.display();
	
	return 0;
}