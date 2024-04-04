
#include <bits/stdc++.h>

using namespace std;


class media{

public:
  
  int * bookPrice, * tapePrice;
  string *bookTitle, *tapeTitle;
  int n;

  void input(){
    cin >> n; 
    bookPrice = new int[n];
    tapePrice = new int[n];
    bookTitle = new string[n];
    tapeTitle = new string[n];
    for(int i = 0;i < n;i++){
      string booktitle, tapetitle;
      int price1, price2;
      cin >> booktitle >> price1 >> tapetitle >> price2;
      bookTitle[i] = booktitle;
      tapeTitle[i] = tapetitle;
      bookPrice[i] = price1;
      tapePrice[i] = price2;
      
     }
  }

  void display(){

    cout<<"     BOOK NAME           PRICE       TAPE NAME     PRICE"<<endl<<endl;

    for(int i = 0; i < n; i++){ 
      cout <<i+1<<") "<< bookTitle[i] << " | " << bookPrice[i] << "      |   " << tapeTitle[i] << " |  " <<  tapePrice[i] << '\n';
    }
  }

  void issue(){
    cout<<"\nTOTAL BOOKS AND TAPE : "<<n<<endl<<endl;
    cout<<"WANT TO ISSUE OR WANT TO SUBMIT : I / S "<<endl<<endl;
    char option;
    cin>>option;
    if(option == 'i'){
        cout<<"Total books after issue : "<<n-1<<endl;
    }
    else if(option == 's'){
      cout<<"Total books after submit : "<<n+1<<endl<<endl;
    }

  }

};

class tape : public media{
public:
  int *time;
  string *author;
  int j;
  void input(){
    cin>>j;
    time = new int[j];
    author = new string[j];
    for(int l = 0;l<j;l++){
      int t;
      string a;
    cin>>a>>t;
    time[l] = t;
    author[l] = a;
  }
  }

  void display(){
    cout<<endl<<endl;
    cout<<"AUTHOR AND DURATION OF ABOVE TAPES : \n"<<endl;
    cout<<"  AUTHOR     DURATION\n"; 
    for(int l = 0;l<j;l++){
    cout<<l+1<<") "<<author[l]<<"  |  "<<time[l]<<" minutes\n";
  }
  }
};

class book : public media{
public:
  int *pages;
  string *author;
  int s;
  void input(){
    cin>>s;
    pages = new int[s];
    author = new string[s];
    for(int k = 0;k<s;k++){
    int p;
    string h;
    cin>>h>>p;
    pages[k] = p;
    author[k] = h;
  }
  }

  void  display(){
    cout<<endl<<endl;
    cout<<"AUTHOR AND PAGES OF THE ABOVE BOOOK : \n"<<endl<<endl;
    cout<<"  AUTHOR     NO OF PAGES\n"<<endl;
    for(int k = 0;k<s;k++){
    cout<<k+1<<") "<<author[k]<<"  |  "<<pages[k]<<" pages\n";
  }
  }


};

int main() {
  media obj;
  book obj1;
  tape obj2;

  obj.input();
  obj.display();
  obj.issue();
  cout<<"DO YOU WANT TO SEE FULL INFORMOATIONS : Y / N "<<endl;
  char demo;
  cin>>demo;
  if(demo == 'y'){
  cout<<"WANT TO SEE NO OF PAGES / DURATION OF TAPE : P / D"<<endl;
  char demo2;
  cin>>demo2;
  if(demo2 == 'd'){
    obj2.input();
    obj2.display();
  }
  else {
    obj1.input();
    obj1.display();
  }
  
  
}

  else
    cout<<"OKAY , THANK YOU"<<endl;



  return 0;
}



/*    input till submit and issue
7
dietil_and_dietils 200 coding_game 150
aerospace_engineer 100 coding_game 150
automobile_workers 300 coding_game 150
computer_with_aman 400 coding_game 150
c++_how_to_program 500 coding_game 150
world_media_dramas 600 coding_game 150
listin_communicate 700 coding_game 150
s

input of books

p
7
sahil 5560
swast 565
debuu 651
amiit 568
ravii 6265
aksht 564
yatin 8615


input of tape

d
7
nitin 85
reddy 25
pawan 143
aryan 45
naven 89
nidsh 56
surya 45

*/