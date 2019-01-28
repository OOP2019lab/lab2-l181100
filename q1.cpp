#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
struct gethuh_user
	{
		string firstname,secname,username,email,pasword;
	};
void gethub_user(string *arr,int size);
bool exist(gethuh_user arr,int size, string username);
	int main()
	{
		bool check= 0;
		int k=0;
		gethuh_user *arr;
		int size=4;
		arr = new gethuh_user[size];
		for(int i=0;i<size;i++)
		{
		    cout<<"enter first name of user "<<i+1<<" :  \n";
			cin>>arr[i].firstname;
		    cout<<"enter second name of user "<<i+1<<" :  \n";
			cin>>arr[i].secname;
			cout<<"enter USERNAME of user "<<i+1<<" :  \n";
			cin>>arr[i].username;
				if(i>0)
			   {
			    	k = i;
				for(int j=k;j>0;j--)
				   {
				   if(arr[i].username == arr[j-1].username)
				     {
						check = 1;
				     }
			       }
				   if(check == 1)
				 	{
			          cout<<"it already exists please input again \n";
			            cin>>arr[i].username;
		            }
				}
			cout<<"enter email adress of user "<<i+1<<" :  \n";
		 	cin>>arr[i].email;

			cout<<"enter password for your email adress  "<<" :  \n";
			cin>>arr[i].pasword;
		}
		getch();
	}

