#include <bits/stdc++.h>
#define ll long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void display(string name[]){
    int c_type;
   cout<<"Following were the combination of coffes that can be ordered : ";
   for(int i = 0;i<3;i++){
      cout<<i+1<<".) "<<name[i]<<endl;
   }
   

}
void display2(string name2[]){
   cout<<"Choose the best preferred add on with your coffe : "<<endl;
   for(int i = 0;i<3;i++){
      cout<<i+1<<".) "<<name2[i]<<endl;
   }
}

void addon(string coffee_type){
    int sum;
     if (coffee_type =="Espresso"){
        sum = 60+75+100;
        cout<<"Price for coffee type Espresso  is: "<<sum;
    }
    else if(coffee_type=="Cappuccino"){
        sum = 80+90+125;
        cout<<"Price for coffee type Cappuccino  is: "<<sum;
        }
    else if (coffee_type=="Latte"){
        sum = 100+125+150;
        cout<<"Price for coffee type Latte  is: "<<sum;
    }
   }


int main() 
{

   fastread();
   int n;
    string name[] = {"Espresso","Cappuccino","Latte"};
    string name2[] = {"Milk","Cream","Syrup"};
    display(name);
    display2(name2);
    cout<<endl<<"Please select Coffee Type: "<<endl;
    cin>>n;
    addon(name[n-1]);
    return 0;
}