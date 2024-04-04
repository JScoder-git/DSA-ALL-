 #include <bits/stdc++.h>
 
 using namespace std;
 
 int main() {
 	int n;
 	cin>>n;
 	while(n--)
 	{
 		int a,b,c,vertical_up,vertical_down,horizontal_left,horizontal_right,d1,d2,d3,d4;
 		cin>>a>>b>>c;
 		vertical_up = b-1;
 		vertical_down = a-b;
 		horizontal_right = a-c;
 		horizontal_left = c-1;
 		if(b>=c){
 			d1=c-1;
 			d4=a-b;
 		}
 		else{
 			d1=b-1;
 			d4=a-c;
 		}
 		if(b+c<=a){
 			d2=c-1;
 			d3=b-1;

 		}
 		else{
 			d2=a-b;
 			d3=a-c;
 		}


 		cout<<vertical_up+vertical_down+horizontal_left+horizontal_right+d1+d4+d2+d3<<endl;


  	}
 	
 	return 0;
 }