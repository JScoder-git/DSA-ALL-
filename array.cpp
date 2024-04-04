#include <iostream>

using namespace std;

int main() {

string name[2][2][4]=
{
  {
	{"Sanjeev","Aditya","Simran","Mandeep"},	
	{"Naveen","Raman","Mohit","Aman"}
},
  {
	{"Jyotsna","Vish av","Abhi","Ankiet"},
	{"Vishal","Chahat","Sakshi","Shriya"}
}
	};


for(int i = 0; i < 2; i++){
	if(i==0){
 		cout<<"Friends of talwara : "<<endl;
	}
	 else
	 {
 		cout<<"\n"<<"Friends of mukerian : "<<"\n\n";
	 }
	 int count = 1;
for(int j = 0; j < 2; j++){
for(int k = 0; k < 4; k++){
	
 cout << count <<" : "<< name[i][j][k] << "\n";
 count++;
	}
}

}
return 0;
}

