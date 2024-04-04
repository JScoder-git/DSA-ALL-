#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

class services
{
public:
        int n;
        string arr[6]={"Emergency_Room_Services","Short_Term_Hospitializatin","X_Ray/Radiology_services",
        "Speciality_Surgical_Services","Blood_Services","Laboratory_Services"};

        
    void input1()
    {
        
            cout<<endl<<endl;
            for(int i = 0;i<6;i++)
            {
            cout<<i+1<<") "<<arr[i]<<"\n";
            }

        cout<<"\nWHICH SERVICES DO YOU WANT TO EDIT : \n"<<endl;
        cin>>n; 
    }
    void display1()
    {
        cout<<"EDIT YOUR SEVICE : "<<arr[n-1]<<endl<<endl;
        
        string new1;
        cin>>new1;
        cout<<"AFTER EDITING THE NEW DATA WILL BE : "<<endl;
        swap(arr[n-1],new1);

        for(int i = 0;i<6;i++)
            {
            cout<<i+1<<") "<<arr[i]<<"\n\n";
            }
    }
};

class doctor : public services
{
public:
        int n;
        string arr[4]={"DR.Sahil_Singh","DR.Swastik_Panja","DR.Amit_Kumar","DR.Devasish"};

    void input2()
    {
        cout<<endl<<endl;
        cout<<"WHICH DOCTOR DETAIL DO YOU WANT TO EDIT : "<<endl<<endl;
        for(int i = 0;i<4;i++)
        {
        cout<<i+1<<") "<<arr[i]<<"\n\n";
        }
        
        cin>>n;
    }
    void display2()
    {
        cout<<"EDIT THE DOCTOR DETAIL : "<<arr[n-1]<<endl<<endl;
        string new2;
        cin>>new2;
        cout<<endl;

        swap(arr[n-1],new2);


        for(int i = 0;i<4;i++)
            {
            cout<<i+1<<") "<<arr[i]<<"\n\n";
            }

    }
};

class patient : public doctor
{
public:
        int n;
        string arr[7]={"Yatin","Aryan","Akshit","Pawan","Reddy","Akash","Sumit"};

    void input3()
    {

        cout<<endl;
        cout<<"\nWHICH PATIENT DETAIL DO YOU WANT TO EDIT : \n"<<endl;
        for(int i = 0;i<7;i++)
        {
        cout<<i+1<<") "<<arr[i]<<"\n\n";
        }
        
        cin>>n;
    }
    void display3()
    {
        cout<<"EDIT THE PATIENT DETAIL : "<<arr[n-1]<<endl;
        string new3;
        cin>>new3;
        cout<<endl;


        swap(arr[n-1],new3);
 

        for(int i = 0;i<7;i++)
            {
            cout<<i+1<<") "<<arr[i]<<"\n\n";
            }

    }
};

class appointment : public patient
{
public:
        int n;
        string arr[4]={"DR.Sahil_Singh","DR.Swastik_Panja","DR.Amit_Kumar","DR.Devasish"};

    void input4()
    {
        cout<<endl<<endl;
        for(int i = 0;i<4;i++)
        {
        cout<<i+1<<") "<<arr[i]<<"  ";
        }
        cout<<"\n\nWITH WHICH DOCTOR DO YOU WANT TO MAKE APOINTMENT : "<<endl;
        cin>>n;
    }
    void display4()
    {
        cout<<"ENTER THE PATIENT DETAIL : \n"<<endl;
        string new4;
        cin>>new4;
        cout<<new4<<" is appointed to : "<<arr[n-1]<<endl;
    }
};

class confirm : public appointment
{
public:
        char c;
    void input5()
    {
        cout<<"\n\nIS DOCTOR IS FREE FOR THE NEXT APPONTMENT : ";
        cin>>c;
    }
    void display5()
    {
        if(c=='y')
        {
            cout<<"\n\nAppoint the doctor to the next patient"<<endl;
        }
        else
            cout<<"Wait for Some time..... "<<endl;
    }
};

class concult : public confirm
{
public:
    int n;
        string arr[4]={"DR.Sahil_Singh","DR.Swastik_Panja","DR.Amit_Kumar","DR.Devasish"};
    void input6()
    {
        cout<<endl;
        cout<<"\nWITH WHICH DOCTOR DO YOU WANT TO CONCULT : \n"<<endl;
        for(int i = 0;i<4;i++)
        {
        cout<<i+1<<") "<<arr[i]<<"  \n";
        }
        
        cin>>n;
    }
    void display6()
    {
        int arrr[4]={217,216,709,415};
        cout<<"\n"<<arr[n-1]<<" Will meet you in Room no : "<<arrr[n-1];
    }   

};


int main() {
    concult obj;
    cout<<"CHOOSSE THE LOGIN PLATFORM : \n\n";
    string arr[4]={"1)_ADMIN","2)_DOCTOR","3)_RECEPTIONIST","4)_PATIENT"};
    for(int i = 0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    int j;
    cin>>j;
    if(j==1)
    {
                cout<<"\n\nWHICH TAB YOU WANT TO OPEN : \n"<<endl;
                string a[3]={"1)_Edit_Services","2)_Edit_Doctor_Detail","3)_Edit_Patient_Detail"};
                for(int i = 0;i<3;i++){
                cout<<a[i]<<" ";
                }
                int t;
                cin>>t;
                if(t==1){
                    obj.input1();
                    obj.display1();
                }
                else if(t==2){
                    obj.input2();
                    obj.display2();
                }
                else if(t==3){
                    obj.input3();
                    obj.display3();
                }
                else
                    cout<<"INVALID\n";
    }
    else if(j==2)
    {
                obj.input2();
                obj.display2();
    }
    else if(j==3)
    {
                obj.input5();
                obj.display5();
    }
    else if(j==4)
    {
                cout<<"WHICH TAB YOU WANT TO OPEN : "<<endl;
                string s[3]={"1)_Make_Appointment","2)_Concult_Doctor","3)_Edit_Patient_Detail"};
                for(int i = 0;i<3;i++)
                {
                cout<<s[i]<<" ";
                }
                int f;
                cin>>f;
                if(f==1){
                    obj.input4();
                    obj.display4();
                }
                else if(f==2){
                    obj.input6();
                    obj.display6();
                }
                else if(f==3){
                    obj.input3();
                    obj.display3();
                }
                else
                    cout<<"INVALID\n";

    }

    else
                cout<<"INVALID"<<endl;
    return 0;
}