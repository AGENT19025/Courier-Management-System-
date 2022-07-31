#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#include<string>
#define nl '\n'
#define ll long long int
#define ff first 
#define ss second 
#define len lenght()
#define ld long double 
#define pf push_front
#define pb push_back
#define vb v.begin()
#define ve v.end()
#define mk make_pair
#define vllp vector<pair<ll,ll>>
#define vs vector<string>
#define vslp vector<pair<string,ll>>
#define vlsp vector<pair<ll,string>>
#define mp map<ll,ll>
#define mlli map<ll,ll>:: iterator
#define msl map<string,ll>
#define msli map<string,ll>:: iterator
#define r for(ll i=0;i<n;i++)

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

vslp v1; // vector v1 is for storing username & mobile number 
vslp v2; // vector v2 is for storing product & rate 
vslp v3; // vector v3 is for storing from address & tracking id 
vs v4; // vector v4 is for storing destination

void new_1()
{
    ll ph,t_id,rate;
    string username,product,destination1,destination2; // variables for give input (destination1 for from hub & destination2 for final hub )
    cout<<nl<<"enter customer mobile number: \n ";
    cin>>ph;
    cout<<"enter the customer name: \n";
    cin>>username;
    // getline(cin,username);
    cout<<"enter the product name:\n";
    getline(cin,product);
    cout<<"enter the starting hud point:\n";
    getline(cin,destination1);
    cout<<"enter the end hub point:\n";
    getline(cin,destination2);
    cout<<"enter the charge for the package: \n";
    cin>>rate;
    t_id=ph+2;
    v1.pb(mk(username,ph));
    v2.pb(mk(product,rate));
    v3.pb(mk(destination1,t_id));
    v4.pb(destination2);
}

void exist_1()
{
    ll s;
    s=v1.size();
    ll ph;
    cout<<"enter the mobile number to get details:\n";
    cin>>ph;
    ll cnt=0;
    for(ll i=0;i<s;i++)
    {
        if(v1[i].ss==ph)
        {
            cout<<endl<<"the user you are searching for: \n";
            cout<<"username:"<<v1[i].ff<<nl;
            cout<<"mobile number:"<<v1[i].ss<<nl;
            cout<<"product name:"<<v2[i].ff<<nl;
            cout<<"amount charged for that shipment:"<<v2[i].ss<<nl;
            cout<<"shipment address:"<<v3[i].ff<<" to ";
            cout<<v4[i]<<nl;
            cout<<"tracking id:"<<v3[i].ss<<nl;
            cnt++;
        }
    }
    if(cnt==0)
    {
        cout<<nl<<"*** No User Found Please Check Mobile Number *** "<<nl;
    }
}

int main()
{
    ll choice=0;
    string e;
    while(choice!=3)
    {
        cout<<"*** welcome to mini courier management system ***"<<nl;
        cout<<"1.NEW USER"<<nl<<"2.ALREADY EXISTING USER"<<nl<<"3.EXIT"<<nl;
        cout<<"*** choose anyone option for services *** "<<nl;
        cin>>choice;
        string cnt=" ";
        switch (choice)
        {
        case 1: new_1();
            break;
        case 2 :exist_1();
            break;
        case 3:
              cout<<nl<<"*** Thanks for choosing mini courier management system ***"<<nl;
              cout<<nl<<"*** please share your valuable feedback with us ***"<<nl;
              cout<<nl<<"*** how is your experience with us ? (good/bad) ***";
              getline(cin,e);
              cout<<nl<<"*** please share your suggestions via mail: kallavishwasudaykiran@gmail.com ***"<<nl;
              cout<<nl<<"*** if you have any queries :: then please dail 09812 223344 ***"<<nl;
            break;
        default: cout<<nl<<"....invaild option...."<<nl; getchar();
            break;
        }

    }
}