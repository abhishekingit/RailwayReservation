#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
#include<fstream>
#include<sstream>
#include<ctime>
#include<algorithm>
#include<limits>
#include<stdexcept>
#include<cmath>
#include<iomanip>
using namespace std;

class admin	//super class (admin functions)
{
public:
	int train_no;	//a variable for storing train no
	char train_name[40];	 //an array of characters for storing train name
	int deptime;	//a variable for storing departure time of train
	char freq[20];	//an array of characters for storing frequency of train
	int fare,fare1;	//variables for storing first class and second class fare
	
	void showdata()	//to show train data
	{
	    cout<<setw(20)<<train_no;
	    cout<<setw(20)<<train_name;
	    cout<<setw(20)<<deptime;
	    cout<<setw(20)<<freq;
	    cout<<setw(20)<<fare;
	    cout<<setw(20)<<fare1;
	    cout<<endl;

	}
	void mainmenu_admin()	//This is our admin main menu
	{
		int k;
		cout << "!!!!!!!!WELCOME TO THE ADMIN MENU!!!!!!!!"<<endl;
		do{
			k = 0;
			int ch;
		cout<<"\n 1. ADD TRAINS\n 2. DELETE TRAINS\n 3. SEARCH TRAINS\n 4. DISPLAY TRAINS\n 5. EXIT\n";
		cout<<"Enter your choice"<<endl;
		cin>>ch;

			switch(ch){
				case 1:
					addtrain();	//calls add train func
					break;
				case 2:
					deltrain();	//calls delete train func
					break;
				case 3:
					searchtrain();	//calls search train func
					break;
				case 4:
					displaytrain();	//calls display trains func
					break;
				case 5:
					{
					cout<<"EXIT ADMIN MENU"<<endl;
					exit(0);
				}
				break;
				default:
					cout<<"\n\nINVALID CHOICE, PLEASE TRY AGAIN!\n\n";
					k = 1;

			}

		}while(k==1);

	}
	void addtrain();	//this will add new trains
	void deltrain();    //this will delete existing trains
	void searchtrain(); //this will search for a specific train
	void displaytrain();  //this will display all trains for a particular source and destination

};
	void admin::addtrain(){
		int k;
		string opt;
		cout<<"adding trains here"<<endl;
		cout<<endl;
		do{

		cout<<"!!!!!!!!WELCOME TO ADD TRAIN MENU!!!!!!!!"<<endl;
		int ch;
		k = 0;
		cout<<"Select the source and destination for which you want to add trains\n";
		cout<<endl;

		cout<<"1. Pune to Amravati\n";
		cout<<"2. Pune to Mumbai\n";
		cout<<"3. Mumbai to Amravati\n";
		cout<<"4. Mumbai to Pune\n";
		cout<<"5. Amravati to Pune\n";
		cout<<"6. Amravati to Mumbai\n";
		cout<<"7. EXIT\n";
		cin>>ch;

		switch(ch){
			case 1:
				{
				admin a1;		//creating an object of class admin
				fstream file;	//creating a file object of fstream class
				file.open("adminpunamr.txt",ios::app|ios::binary);	//opening a file
				cout<<endl;
				cout<<"Enter a train no : \n";
				cin>>a1.train_no;
				cout<<"Enter a train name : \n";
				cin>>a1.train_name;
				cout<<"Enter the departure time for this train : \n";
				cin>>a1.deptime;
				cout<<"Enter the frequency for this train : eg:(DAY1/DAY2..) \n";
				cin>>a1.freq;
				cout<<"Set Fare for first class :\n";
				cin>>a1.fare;
				cout<<"Set Fare for second class :\n";
				cin>>a1.fare1;
				file.write((char *)&a1,sizeof(a1));		//using string buffer to write in a file
				file.close();			//closing a file
				cout<<endl<<"!!!!!!TRAIN ADDED SUCCESSFULLY!!!!!!"<<endl<<endl;
				break;
				}
			case 2:
				{
				admin a1;		//creating an object of class admin
				fstream file;	//creating a file object of fstream class
				file.open("adminpunmum.txt",ios::app|ios::binary);	//opening a file
				cout<<endl;
				cout<<"Enter a train no : \n";
				cin>>a1.train_no;
				cout<<"Enter a train name : \n";
				cin>>a1.train_name;
				cout<<"Enter the departure time for this train : \n";
				cin>>a1.deptime;
				cout<<"Enter the frequency for this train : eg:(DAY1/DAY2..) \n";
				cin>>a1.freq;
				cout<<"Set Fare for first class :\n";
				cin>>a1.fare;
				cout<<"Set Fare for second class :\n";
				cin>>a1.fare1;
				file.write((char *)&a1,sizeof(a1));	//using string buffer to write in a file
				file.close();		//closing a file
				cout<<endl<<"!!!!!!TRAIN ADDED SUCCESSFULLY!!!!!!"<<endl<<endl;
				break;
				}
			case 3:
				{
				admin a1;		//creating an object of class admin
				fstream file;	//creating a file object of fstream class
				file.open("adminmumamr.txt",ios::app|ios::binary);	//opening a file
				cout<<endl;
				cout<<"Enter a train no : \n";
				cin>>a1.train_no;
				cout<<"Enter a train name : \n";
				cin>>a1.train_name;
				cout<<"Enter the departure time for this train : \n";
				cin>>a1.deptime;
				cout<<"Enter the frequency for this train : eg:(DAY1/DAY2..) \n";
				cin>>a1.freq;
				cout<<"Set Fare for first class :\n";
				cin>>a1.fare;
				cout<<"Set Fare for second class :\n";
				cin>>a1.fare1;
				file.write((char *)&a1,sizeof(a1));		//using string buffer to write in a file
				file.close();		//closing a file
				cout<<endl<<"!!!!!!TRAIN ADDED SUCCESSFULLY!!!!!!"<<endl<<endl;
				break;
				}
			case 4:
			{
				admin a1;		//creating an object of class admin
				fstream file;	//creating a file object of fstream class
				file.open("adminmumpun.txt",ios::app|ios::binary);	//opening a file
				cout<<endl;
				cout<<"Enter a train no : \n";
				cin>>a1.train_no;
				cout<<"Enter a train name : \n";
				cin>>a1.train_name;
				cout<<"Enter the departure time for this train : \n";
				cin>>a1.deptime;
				cout<<"Enter the frequency for this train : eg:(DAY1/DAY2..) \n";
				cin>>a1.freq;
				cout<<"Set Fare for first class :\n";
				cin>>a1.fare;
				cout<<"Set Fare for second class :\n";
				cin>>a1.fare1;
				file.write((char *)&a1,sizeof(a1));	//using string buffer to write in a file
				file.close();	//closing a file
				cout<<endl<<"!!!!!!TRAIN ADDED SUCCESSFULLY!!!!!!"<<endl<<endl;
				break;
				}
			case 5:
				{
				admin a1;		//creating an object of class admin
				fstream file;	//creating a file object of fstream class
				file.open("adminamrpun.txt",ios::app|ios::binary);	//opening a file
				cout<<endl;
				cout<<"Enter a train no : \n";
				cin>>a1.train_no;
				cout<<"Enter a train name : \n";
				cin>>a1.train_name;
				cout<<"Enter the departure time for this train : \n";
				cin>>a1.deptime;
				cout<<"Enter the frequency for this train : eg:(DAY1/DAY2..) \n";
				cin>>a1.freq;
				cout<<"Set Fare for first class :\n";
				cin>>a1.fare;
				cout<<"Set Fare for second class :\n";
				cin>>a1.fare1;
				file.write((char *)&a1,sizeof(a1));	//using string buffer to write in a file
				file.close();	//closing a file
				cout<<endl<<"!!!!!!TRAIN ADDED SUCCESSFULLY!!!!!!"<<endl<<endl;
				break;
				}
			case 6:
				{
				admin a1;		//creating an object of class admin
				fstream file;	//creating a file object of fstream class
				file.open("adminamrmum.txt",ios::app|ios::binary);	//opening a file
				cout<<endl;
				cout<<"Enter a train no : \n";
				cin>>a1.train_no;
				cout<<"Enter a train name : \n";
				cin>>a1.train_name;
				cout<<"Enter the departure time for this train : \n";
				cin>>a1.deptime;
				cout<<"Enter the frequency for this train : eg:(DAY1/DAY2..) \n";
				cin>>a1.freq;
				cout<<"Set Fare for first class :\n";
				cin>>a1.fare;
				cout<<"Set Fare for second class :\n";
				cin>>a1.fare1;
				file.write((char *)&a1,sizeof(a1));	//using string buffer to write in a file
				file.close();	//closing a file
				cout<<endl<<"!!!!!!TRAIN ADDED SUCCESSFULLY!!!!!!"<<endl<<endl;
				break;
				}
			case 7:
				cout<<"EXIT"<<endl;
				exit(0);
				break;
			default:
				cout<<endl<<"INVALID CHOICE, PLEASE TRY AGAIN!"<<endl;
				k = 1;
				break;
		}

		cout<<"DO YOU WANT TO ADD ANOTHER TRAIN\n";
		cout<<"Enter Y for Yes and N for NO\n";
		cin>>opt;


	}while(k==1||opt=="y"||opt=="Y");

	if(opt=="n"||opt=="N"){
		mainmenu_admin();		//calling the main menu of admin here
	}

}

	void admin::deltrain(){
		cout<<"deleting trains here"<<endl;
		cout<<endl;

		int k;
		string opt;
		cout<<"adding trains here"<<endl;
		cout<<endl;
		do{

		cout<<"!!!!!!!!WELCOME TO DELETE TRAIN MENU!!!!!!!!"<<endl;
		int ch;
		k = 0;
		cout<<"Select the source and destination for which you want to add trains\n";
		cout<<endl;

		cout<<"1. Pune to Amravati\n";
		cout<<"2. Pune to Mumbai\n";
		cout<<"3. Mumbai to Amravati\n";
		cout<<"4. Mumbai to Pune\n";
		cout<<"5. Amravati to Pune\n";
		cout<<"6. Amravati to Mumbai\n";
		cout<<"7. EXIT\n";
		cin>>ch;

		switch(ch){
            case 1:
            {
                admin a1;
                int a,b,i,flag=0;
                cout<<"Enter the Train no for which you want to delete the train\n";
                cin>>a;
                fstream file1,file2;
                file1.open("adminpunamr.txt",ios::in);
                file2.open("temp1.txt",ios::binary|ios::app);	//creating temporary file to remove contents
                while(file1.read((char *)&a1,sizeof(a1)))
                {
                    if(a1.train_no!=a)
                    {
                        file2.write((char *)&a1,sizeof(a1));

                    }
                }
                file1.close();
                file2.close();
                remove("adminpunamr.txt");		//removing the original file
                rename("temp1.txt","adminpunamr.txt");	//renaming the temp file to original file
                cout<<endl<<"!!!!!!TRAIN DELETED SUCCESSFULLY!!!!!!"<<endl<<endl;
                break;

            }
            case 2:
            {
                admin a2;
                int a,b,i,flag=0;
                cout<<"Enter the Train no for which you want to delete the train\n";
                cin>>a;
                fstream file1,file2;
                file1.open("adminpunmum.txt",ios::in);
                file2.open("temp2.txt",ios::binary|ios::app);	//creating temporary file to remove contents
                while(file1.read((char *)&a2,sizeof(a2)))
                {
                    if(a2.train_no!=a)
                    {
                        file2.write((char *)&a2,sizeof(a2));

                    }
                }
                file1.close();
                file2.close();
                remove("adminpunmum.txt");		//removing the original file
                rename("temp2.txt","adminpunmum.txt");		//renaming the temp file to original file
                cout<<endl<<"!!!!!!TRAIN DELETED SUCCESSFULLY!!!!!!"<<endl<<endl;
                break;

            }
            case 3:
            {
                admin a3;
                int a,b,i,flag=0;
                cout<<"Enter the Train no for which you want to delete the train\n";
                cin>>a;
                fstream file1,file2;
                file1.open("adminmumamr.txt",ios::in);
                file2.open("temp3.txt",ios::binary|ios::app);	//creating temporary file to remove contents
                while(file1.read((char *)&a3,sizeof(a3)))
                {
                    if(a3.train_no!=a)
                    {
                        file2.write((char *)&a3,sizeof(a3));

                    }
                }
                file1.close();
                file2.close();
                remove("adminmumamr.txt");		//removing the original file
                rename("temp3.txt","adminmumamr.txt");		//renaming the temp file to original file
                cout<<endl<<"!!!!!!TRAIN DELETED SUCCESSFULLY!!!!!!"<<endl<<endl;
                break;

            }
            case 4:
            {
                admin a4;
                int a,b,i,flag=0;
                cout<<"Enter the Train no for which you want to delete the train\n";
                cin>>a;
                fstream file1,file2;
                file1.open("adminmumpun.txt",ios::in);
                file2.open("temp4.txt",ios::binary|ios::app);	//creating temporary file to remove contents
                while(file1.read((char *)&a4,sizeof(a4)))
                {
                    if(a4.train_no!=a)
                    {
                        file2.write((char *)&a4,sizeof(a4));

                    }
                }
                file1.close();
                file2.close();
                remove("adminmumpun.txt");	//removing the original file
                rename("temp4.txt","adminmumpun.txt");	//renaming the temp file to original file
                cout<<endl<<"!!!!!!TRAIN DELETED SUCCESSFULLY!!!!!!"<<endl<<endl;
                break;

            }
            case 5:
            {
                admin a5;
                int a,b,i,flag=0;
                cout<<"Enter the Train no for which you want to delete the train\n";
                cin>>a;
                fstream file1,file2;
                file1.open("adminamrpun.txt",ios::in);
                file2.open("temp5.txt",ios::binary|ios::app);	//creating temporary file to remove contents
                while(file1.read((char *)&a5,sizeof(a5)))
                {
                    if(a5.train_no!=a)
                    {
                        file2.write((char *)&a5,sizeof(a5));

                    }
                }
                file1.close();
                file2.close();
                remove("adminamrpun.txt");		//removing the original file
                rename("temp5.txt","adminamrpun.txt");	//renaming the temp file to original file
                cout<<endl<<"!!!!!!TRAIN DELETED SUCCESSFULLY!!!!!!"<<endl<<endl;
                break;

            }
            case 6:
            {
                admin a6;
                int a,b,i,flag=0;
                cout<<"Enter the Train no for which you want to delete the train\n";
                cin>>a;
                fstream file1,file2;
                file1.open("adminamrmum.txt",ios::in);
                file2.open("temp6.txt",ios::binary|ios::app);	//creating temporary file to remove contents
                while(file1.read((char *)&a6,sizeof(a6)))
                {
                    if(a6.train_no!=a)
                    {
                        file2.write((char *)&a6,sizeof(a6));

                    }
                }
                file1.close();
                file2.close();
                remove("adminamrmum.txt");		//removing the original file
                rename("temp6.txt","adminamrmum.txt");	//renaming the temp file to original file
                cout<<endl<<"!!!!!!TRAIN DELETED SUCCESSFULLY!!!!!!"<<endl<<endl;
                break;


            }
            case 7:
				cout<<"EXIT"<<endl;
				exit(0);
				break;
			default:
				cout<<endl<<"INVALID CHOICE, PLEASE TRY AGAIN!"<<endl;
				k = 1;
				break;
		}

		cout<<"DO YOU WANT TO REMOVE ANOTHER TRAIN\n";
		cout<<"Enter Y for Yes and N for NO\n";
		cin>>opt;


	}while(k==1||opt=="y"||opt=="Y");

	if(opt=="n"||opt=="N"){
		mainmenu_admin();
	}

}


	void admin::searchtrain(){
		cout<<"searching trains here"<<endl;
		cout<<endl;

		int k;
		string opt;
		cout<<endl;
		do
		{

		cout<<"!!!!!!!!WELCOME TO SEARCH TRAIN MENU!!!!!!!!"<<endl;
		int ch;
		k = 0;
		cout<<"Select the source and destination for which you want to search trains\n";
		cout<<endl;

		cout<<"1. Pune to Amravati\n";
		cout<<"2. Pune to Mumbai\n";
		cout<<"3. Mumbai to Amravati\n";
		cout<<"4. Mumbai to Pune\n";
		cout<<"5. Amravati to Pune\n";
		cout<<"6. Amravati to Mumbai\n";
		cout<<"7. EXIT\n";
		cin>>ch;

		switch(ch){
			case 1:
				{
				admin a1;
				int n;
				int flag = 0;
				cout<<endl<<"Enter the train no of the train you want to search\n";
				cin>>n;
				fstream file;
				file.open("adminpunamr.txt",ios::in);

				while(file.read((char *)&a1,sizeof(a1)))	//looping until it reads all contents of file
				{
					if(n==a1.train_no)
					{
						cout<<endl;
						cout<<"!!!!!!SEARCH RESULTS!!!!!!"<<endl;
						cout<<"Train no of the train is : "<<a1.train_no<<endl;
						cout<<"Train Name is : "<<a1.train_name<<endl;
						cout<<"Departure time is : "<<a1.deptime<<endl;
						cout<<"Frequency of train is : "<<a1.freq<<endl;
						cout<<"First class Fare is : "<<a1.fare<<endl;
						cout<<"Second class Fare is : "<<a1.fare1<<endl;
						cout<<endl;
						flag = 1;
						break;
					}

				}
				if(flag==0)
				{
					cout<<endl<<"RECORD NOT FOUND!!"<<endl<<endl;
				}
				file.close();
				break;
			}
			case 2:
				{
				admin a2;
				int n;
				int flag = 0;
				cout<<endl<<"Enter the train no of the train you want to search\n";
				cin>>n;
				fstream file;
				file.open("adminpunmum.txt",ios::in);

				while(file.read((char *)&a2,sizeof(a2)))	//looping until it reads all contents of file
				{
					if(n==a2.train_no)
					{
						cout<<endl;
						cout<<"!!!!!!SEARCH RESULTS!!!!!!"<<endl;
						cout<<"Train no of the train is : "<<a2.train_no<<endl;
						cout<<"Train Name is : "<<a2.train_name<<endl;
						cout<<"Departure time is : "<<a2.deptime<<endl;
						cout<<"Frequency of train is : "<<a2.freq<<endl;
						cout<<"First class Fare is : "<<a2.fare<<endl;
						cout<<"Second class Fare is : "<<a2.fare1<<endl;
						cout<<endl;
						flag = 1;
						break;
					}
				}
				if(flag==0)
				{
					cout<<endl<<"RECORD NOT FOUND!!"<<endl<<endl;
				}
				file.close();
				break;
				}
			case 3:
				{
				admin a3;
				int n;
				int flag = 0;
				cout<<endl<<"Enter the train no of the train you want to search\n";
				cin>>n;
				fstream file;
				file.open("adminmumamr.txt",ios::in);

				while(file.read((char *)&a3,sizeof(a3)))	//looping until it reads all contents of file
				{
					if(n==a3.train_no)
					{
						cout<<endl;
						cout<<"!!!!!!SEARCH RESULTS!!!!!!"<<endl;
						cout<<"Train no of the train is : "<<a3.train_no<<endl;
						cout<<"Train Name is : "<<a3.train_name<<endl;
						cout<<"Departure time is : "<<a3.deptime<<endl;
						cout<<"Frequency of train is : "<<a3.freq<<endl;
						cout<<"First class Fare is : "<<a3.fare<<endl;
						cout<<"Second class Fare is : "<<a3.fare1<<endl;
						cout<<endl;
						flag = 1;
						break;

					}

				}
				if(flag==0)
				{
					cout<<endl<<"RECORD NOT FOUND!!"<<endl<<endl;
				}
				file.close();
				break;

				}
			case 4:
				{
				admin a4;
				int n;
				int flag = 0;
				cout<<endl<<"Enter the train no of the train you want to search\n";
				cin>>n;
				fstream file;
				file.open("adminmumpun.txt",ios::in);

				while(file.read((char *)&a4,sizeof(a4)))	//looping until it reads all contents of file
				{
					if(n==a4.train_no)
					{
						cout<<endl;
						cout<<"!!!!!!SEARCH RESULTS!!!!!!"<<endl;
						cout<<"Train no of the train is : "<<a4.train_no<<endl;
						cout<<"Train Name is : "<<a4.train_name<<endl;
						cout<<"Departure time is : "<<a4.deptime<<endl;
						cout<<"Frequency of train is : "<<a4.freq<<endl;
						cout<<"First class Fare is : "<<a4.fare<<endl;
						cout<<"Second class Fare is : "<<a4.fare1<<endl;
						cout<<endl;
						flag = 1;
						break;
					}
				}
				if(flag==0)
				{
					cout<<endl<<"RECORD NOT FOUND!!"<<endl<<endl;
				}
				file.close();
				break;
				}
			case 5:
				{
				admin a5;
				int n;
				int flag = 0;
				cout<<endl<<"Enter the train no of the train you want to search\n";
				cin>>n;
				fstream file;
				file.open("adminamrpun.txt",ios::in);

				while(file.read((char *)&a5,sizeof(a5)))	//looping until it reads all contents of file
				{
					if(n==a5.train_no)
					{
						cout<<endl;
						cout<<"!!!!!!SEARCH RESULTS!!!!!!"<<endl;
						cout<<"Train no of the train is : "<<a5.train_no<<endl;
						cout<<"Train Name is : "<<a5.train_name<<endl;
						cout<<"Departure time is : "<<a5.deptime<<endl;
						cout<<"Frequency of train is : "<<a5.freq<<endl;
						cout<<"First class Fare is : "<<a5.fare<<endl;
						cout<<"Second class Fare is : "<<a5.fare1<<endl;
						cout<<endl;
						flag = 1;
						break;
					}
				}
				if(flag==0)
				{
					cout<<endl<<"RECORD NOT FOUND!!"<<endl<<endl;
				}
				file.close();
				break;
				}
			case 6:
				{
				admin a6;
				int n;
				int flag = 0;
				cout<<endl<<"Enter the train no of the train you want to search\n";
				cin>>n;
				fstream file;
				file.open("adminamrmum.txt",ios::in);

				while(file.read((char *)&a6,sizeof(a6)))	//looping until it reads all contents of file
				{
					if(n==a6.train_no)
					{
						cout<<endl;
						cout<<"!!!!!!SEARCH RESULTS!!!!!!"<<endl;
						cout<<"Train no of the train is : "<<a6.train_no<<endl;
						cout<<"Train Name is : "<<a6.train_name<<endl;
						cout<<"Departure time is : "<<a6.deptime<<endl;
						cout<<"Frequency of train is : "<<a6.freq<<endl;
						cout<<"First class Fare is : "<<a6.fare<<endl;
						cout<<"Second class Fare is : "<<a6.fare1<<endl;
						cout<<endl;
						flag = 1;
						break;
					}
				}
				if(flag==0)
				{
					cout<<endl<<"RECORD NOT FOUND!!"<<endl<<endl;
				}
				file.close();
				break;

				}
			case 7:
				cout<<"EXIT"<<endl;
				exit(0);
				break;
			default:
				cout<<endl<<"INVALID CHOICE, PLEASE TRY AGAIN!"<<endl;
				k = 1;
				break;
		}
		cout<<"DO YOU WANT TO SEARCH ANOTHER TRAIN\n";
		cout<<"Enter Y for Yes and N for NO\n";
		cin>>opt;

		}while(k==1||opt=="y"||opt=="Y");
		if(opt=="n"||opt=="N")
		{
			mainmenu_admin();
		}

	}
	void admin::displaytrain(){
		cout<<"displaying train here"<<endl;
		cout<<endl;

		int k;
		string opt;
		cout<<endl;
		do
		{

		cout<<"!!!!!!!!WELCOME TO DISPLAY TRAIN MENU!!!!!!!!"<<endl;
		int ch;
		k = 0;
		cout<<"Select the source and destination for which you want to display trains\n";
		cout<<endl;

		cout<<"1. Pune to Amravati\n";
		cout<<"2. Pune to Mumbai\n";
		cout<<"3. Mumbai to Amravati\n";
		cout<<"4. Mumbai to Pune\n";
		cout<<"5. Amravati to Pune\n";
		cout<<"6. Amravati to Mumbai\n";
		cout<<"7. EXIT\n";
		cin>>ch;
		cout << "--------------------------------" << endl;
		cout<<endl;
		cout<<setw(20)<<"Train number";
	    cout<<setw(20)<<"Train name";
	    cout<<setw(20)<<"Departure time";
	    cout<<setw(20)<<"Frequency";
	    cout<<setw(20)<<"First class Fare";
	    cout<<setw(20)<<"Second class Fare";
	    cout<<endl;

		switch(ch){
            case 1:
                {
                    admin a1;
                    fstream file20;
                    file20.open("adminpunamr.txt");
                    while(file20.read((char *)&a1,sizeof(a1)))
                    {
                        a1.showdata();
                    }
                    file20.close();
                    break;
                }
            case 2:
                {
                    admin a1;
                    fstream file20;
                    file20.open("adminpunmum.txt");
                    while(file20.read((char *)&a1,sizeof(a1)))
                    {
                        a1.showdata();	//calling the showdata function
                    }
                    file20.close();
                    break;
                }
            case 3:
                {
                    admin a1;
                    fstream file20;
                    file20.open("adminmumamr.txt");
                    while(file20.read((char *)&a1,sizeof(a1)))
                    {
                        a1.showdata();	//calling the showdata function
                    }
                    file20.close();
                    break;
                }
            case 4:
                {
                    admin a1;
                    fstream file20;
                    file20.open("adminmumpun.txt");
                    while(file20.read((char *)&a1,sizeof(a1)))
                    {
                        a1.showdata();	//calling the showdata function
                    }
                    file20.close();
                    break;
                }
            case 5:
                {
                    admin a1;
                    fstream file20;
                    file20.open("adminamrpun.txt");
                    while(file20.read((char *)&a1,sizeof(a1)))
                    {
                        a1.showdata();	//calling the showdata function
                    }
                    file20.close();
                    break;
                }
            case 6:
                {
                    admin a1;
                    fstream file20;
                    file20.open("adminamrmum.txt");
                    while(file20.read((char *)&a1,sizeof(a1)))
                    {
                        a1.showdata();	//calling the showdata function
                    }
                    file20.close();
                    break;
                }
            case 7:
                {
                cout<<"EXIT"<<endl;
				mainmenu_admin();
				break;
                }
            default:
                cout<<endl<<"INVALID CHOICE, PLEASE TRY AGAIN!"<<endl;
				k = 1;
				break;
           }
            cout<<"DO YOU WANT TO DISPLAY ANOTHER TRAIN\n";
            cout<<"Enter Y for Yes and N for NO\n";
            cin>>opt;
	}while(k==1||opt=="y"||opt=="Y");
		if(opt=="n"||opt=="N")
		{
			mainmenu_admin();
		}
	}


class user:public admin		//class user (sub class of super class admin)
{
	public:
		int check;	//flag variable
		char source[10], destination[10], clas, bmeal[10];	//source, destination, class(f/s), meal
		int train_no;	//train number
		char train_name[40];	//train name
		int dep_time;	//departure time
		char freq[20];	//frequency
		int fee_f, fee_s;	//f and s class fees
		int pnum;	//no of passengers
		int age[10];	//age of pax
		char name[10][30];	//name of pax
		char surname[10][30];	//surnames of pax
		const char *sex[10];	//gender of pax
		char hand[10];	//disability of pax
		int day, month, year;	//day, month, year 
		string day_name;	//test variable
		double fee[10];	//stores fees for passing to concession function
		int pnr;	//PNR number
		int age1;	//for passing age to concession function
		char disabled;	//for passible diability to concession function
		char* sex1;	
		double base_fee;	//base fee of train for particular pax
		int meal_price[10];		//stores meal prices
		int fee_final[10];	//stores final price of the ticket

		user()
		{
			check = 0;
			age1 = 0;
			strcpy(source,"");
			strcpy(destination,"");
		}
		
		//function declaration
		void input();
		void display();

		void mainmenu_user()		//main menu of user class
		{
			cout << "--------------------------------" << endl;
			cout << "WELCOME TO MAIN MENU" << endl;
			int ch, k = 1;
			cout << "1. Reservation \n";
			cout << "2. Cancellation \n";
			cout << "3. Train Schedule \n";
			cout << "4. Concessions \n";
			cout << "5. Meal Service \n";
			cout << "6. PNR Enquiry \n";
			cout << "7. Exit \n";
			cout << "--------------------------------" << endl;
			cin >> ch;

			do {
				k = 1;
				switch (ch)
				{
				case 1:
					reservation();		//calls reservation function
					break;

				case 2:
					cancellation();		//calls cancellation function
					break;

				case 3:
					int ts;
    	            ts = trainschedule(source, destination, check);	//calls train schedule function
					break;

				case 4:
					double ts1;
					ts1 = concession(age1, disabled, base_fee);	//calls concession function
					break;

				case 5:
					{
						int ts2;
						ts2 = meal();	//calls meal function
					}
					break;

				case 6:
					pnrenquiry();	//calls pnr enquiry function
					break;

				case 7:
				{
					cout << "You have exited the application";
					exit(0);	//exits the application
				}
				break;
				default:
				{
					cout << "Invalid choice. Try again." << endl;
					k = 0;
				}
				}
			} while (k == 0);
		}

		void reservation()
		{
			user obj1;	//user class object creation
			cout << "Reservation" << endl;
			cout << "--------------------------------" << endl;
			fstream file3;
			file3.open("paxdata.txt", ios::app | ios::binary);	//opens the file
			obj1.input();	//calls input function
			file3.write((char*)&obj1,sizeof(obj1));	//using string buffer to write in a file
			file3.close();	//close the file
			payment();	//calls payment function
			obj1.display();	//calls display function using object of user class
			mainmenu_user();
		}

		void cancellation()
		{
			cout<<"Cancellation\n";
			cout << "--------------------------------" << endl;
			int flag2 = 1;
			char ch;
			user obj1;
			do{
			int a;
			cout<<"Enter the PNR Code: \n";
			cin>>a;
			fstream file3, file4;
			file3.open("paxdata.txt", ios::in | ios::binary);
			file4.open("temp.txt", ios::binary | ios::app);	//temp file to sotre content
			while(file3.read((char*)&obj1,sizeof(obj1)))
			{
                if(obj1.pnr!=a)
				{
					file4.write((char*)&obj1,sizeof(obj1));	//writing in file using string buffer
				}
			}
			file3.close();
			file4.close();
			remove("paxdata.txt");	//removing file
			rename("temp.txt","paxdata.txt");	//renaming the file
			cout<<"Ticket has been removed\n";
			cout<<"Do you want to remove any more tickets\n";
			cout<<"Enter 'Y' for yes\n";
			cin>>ch;
			if(ch == 'Y' || ch == 'y')
				flag2 = 0;
			}while(flag2 == 0);
			mainmenu_user();	//calls main menu function
		}

		int trainschedule(char source[10], char destination[10], int check)
		{
		int k = 0;
		char s[5];
		do {
			string getcontent;
        	if(strcmp(source, "") == 0 && strcmp(destination, "") == 0)
      		{
      			int dmy = 0, dmy1 = 0;  
      			do{
					dmy1 = 0;		  
					cout<<"Enter the starting place\n";
					cin>>source;
					cout<<"Enter the destination\n";
					cin>>destination;
					if(strcmp(source, "Mumbai") != 0 && strcmp(source, "Pune") != 0 && strcmp(source, "Amravati") != 0)
						{
							cout<<"Invalid Source\n";
							dmy1++;
						}
					if(strcmp(destination, "Mumbai") != 0 && strcmp(destination, "Pune") != 0 && strcmp(destination, "Amravati") != 0)
					{
							cout<<"Invalid Destination\n";
							dmy1++;
						}
						
					if(strcmp(source, destination) == 0)
					{
						cout<<"Source and Destination cannot be same\n";
						dmy1++;
					}
				}while(dmy1 != 0);
				do{
					dmy = 0;
					cout << "Enter Date:" << endl;
					cout<<"Day"<<endl;
					cin >> day;
					cout<<"Month"<<endl;
					cin >> month;
					if(month < 1 || month > 12)
						dmy++;
					if(month == 2)
						if(day < 1 || day > 29)
							dmy++;		
					if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
						if(day < 1 || day > 31)
							dmy++;				
					else if(month == 4 || month == 6 || month == 9 || month == 11)
						if(day < 1 || day > 30)
							dmy++;
					cout<<"Year"<<endl;
					cin >> year;
					if(year < 2019)
						dmy++;
					if(dmy != 0)
						cout<<"Invalid Date\n";		
				}while(dmy != 0);


				std::tm time_in = { 0, 0, 0, // second, minute, hour
    			day, month, year - 1900 }; // 1-based day, 0-based month, year since 1900

  				std::time_t time_temp = std::mktime(&time_in);

  				//Note: Return value of localtime is not threadsafe, because it might be
  				// (and will be) reused in subsequent calls to std::localtime!
  				const std::tm * time_out = std::localtime(&time_temp);
  				cout<<time_out->tm_wday;

			}
			
			cout << "--------------------------------" << endl;
			cout<<endl;
			cout<<setw(20)<<"Train number";
		    cout<<setw(20)<<"Train name";
		    cout<<setw(20)<<"Departure time";
		    cout<<setw(20)<<"Frequency";
		    cout<<setw(20)<<"First class Fare";
		    cout<<setw(20)<<"Second class Fare";
		    cout<<endl;
			if (std::strcmp(source, "Pune") == 0 && std::strcmp(destination, "Mumbai") == 0)
			{
				admin u1;
				fstream openfile;
				openfile.open("adminpunmum.txt");
				
                    while(openfile.read((char *)&u1,sizeof(u1)))
                    {
                        u1.showdata();	//calling showdata function
                    }
                    openfile.close();
			}
			else if (std::strcmp(source, "Mumbai") == 0 && std::strcmp(destination, "Pune") == 0)
			{
				admin u1;
				fstream openfile;
				openfile.open("adminmumpun.txt");
				
                    while(openfile.read((char *)&u1,sizeof(u1)))
                    {
                        u1.showdata();	//calling showdata function
                    }
                    openfile.close();
			}
			else if (std::strcmp(source, "Mumbai") == 0 && std::strcmp(destination, "Amravati") == 0)
			{
				admin u1;
				fstream openfile;
				openfile.open("adminmumamr.txt");
				
                    while(openfile.read((char *)&u1,sizeof(u1)))
                    {
                        u1.showdata();	//calling showdata function
                    }
                    openfile.close();
			}
			else if (std::strcmp(source, "Amravati") == 0 && std::strcmp(destination, "Mumbai") == 0)
			{
				admin u1;
				fstream openfile;
				openfile.open("adminamrmum.txt");
				
                    while(openfile.read((char *)&u1,sizeof(u1)))
                    {
                        u1.showdata();	//calling showdata function
                    }
                    openfile.close();
			}
			else if (std::strcmp(source, "Pune") == 0 && std::strcmp(destination, "Amravati") == 0)
			{
				admin u1;
				fstream openfile;
				openfile.open("adminpunamr.txt");
				
                    while(openfile.read((char *)&u1,sizeof(u1)))
                    {
                        u1.showdata();	//calling showdata function
                    }
                    openfile.close();
			}
			else if (std::strcmp(source, "Amravati") == 0 && std::strcmp(destination, "Pune") == 0)
			{
				admin u1;
				fstream openfile;
				openfile.open("adminamrpun.txt");
				
                    while(openfile.read((char *)&u1,sizeof(u1)))
                    {
                        u1.showdata();	//calling showdata function
                    }
                    openfile.close();
			}
			else
			{
				cout << "Wrong Inputs" << endl;
			}
			if (check == 1)
			{
				cout<<"Enter the train no. \n";
				cin>>train_no;
				return(train_no);
			}
			int k1 = 0;
			do {
				strcpy(source,"");
				strcpy(destination,"");
				cout << "Do you want to try again or exit to main main" << endl;
				cout << "Yes to try again" << endl;
				cout << "Back to go back to main menu" << endl;
				cin >> s;
				if (std::strcmp(s, "Back") == 0)
					mainmenu_user();	//calls main menu
				else if (std::strcmp(s, "Yes") == 0)
				{
					k = 1;
					k1 = 0;
				}
				else
				{
					cout << "Invalid choice. Try again" << endl;
					k1 = 1;
				}
			} while (k1 == 1);
		} while (k == 1);
		return 0;
		}

		double concession(int age1, char disabled, double base_fee)	//concession function
		{
			double discounted_fee;
			if(age1 == 0)
			{
				cout<<"Criteria for concession are:\n";
				cout<<"Senior citizen - 60 years 40% off\n";
				cout<<"Disabled/ Handicapped - 50% off\n";
				return 0;
			}
			else
			{
			//calculates the prices based on certain factors
			if(disabled == 'Y' || disabled == 'y')
				discounted_fee = 0.5 * base_fee;

			else if(age1 >= 60)
				discounted_fee = 0.6 * base_fee;

			else
				discounted_fee = base_fee;
			}

			return(discounted_fee);
		}

		int meal()
		{
			int mm;
			int mm1 = 1;
			char mm2;
			string getcontent2;	//contents of files will be stored here for display
			string getcontent3;	//contents of files will be stored here for display
			do
			{
				mm1 = 1;
				if(strcmp(source, "") == 0 && strcmp(destination, "") == 0)
				{
					cout<<"Enter 1 For Veg Menu, 2 For Non-Veg Menu\n";
					cin>>mm;
					switch(mm)
					{
						case 1:
						{
							mm1 = 1;
							ifstream infile2("mealv.txt");
							if (infile2.is_open())	//checks if file is open
							{
								while (!infile2.eof())	//checks if eof is reached
								{
									getline(infile2, getcontent2);	//content of file is stores in 'getcontent' variable
									cout<< getcontent2 << endl;		//displays the content of list
								}
							}
						}
						break;

						case 2:
						{
							mm1 = 1;
							ifstream infile3("mealn.txt");
							if (infile3.is_open())	//checks if file is open
							{
								while (!infile3.eof())	//checks if eof is reached
								{
									getline(infile3, getcontent3);	//content of file is stores in 'getcontent' variable
									cout<< getcontent3 << endl;	//displays the content of list
								}
							}
						}
						break;

						default:
						{
							cout<<"Wrong Input\n";
							mm1 = 0;
						}
					}

					if (mm1 == 1)
					{
						cout<<"Do you want to see other menu?\n";
						cout<<"'Y' for Yes,'N' for No\n";
						cin>>mm2;
						if(mm2 == 'Y' || mm2 == 'y')
							mm1 = 0;
						else
						{
							strcpy(source,"");
							strcpy(destination,"");
							mainmenu_user();
						}
					}
				}

				else
				{	//same as the if statement above, just the contents are stored for further use in addition to displaying the files
					int choice;
					cout<<"Enter your choice: \n";
					cout<<"1. Veg  2. Non-Veg\n";
					cin>>choice;
					string mealcontent;
					int mealcode;
					string mealname;
					int mealvalue;
					switch(choice)
					{
						case 1:
							{
								ifstream mealfile("mealv.txt");
								int a, c;
								string b;
								if (mealfile.is_open())
								{
									while (!mealfile.eof())
									{
										getline(mealfile, mealcontent);
										cout << mealcontent << endl;
									}
								}
								cout<<"Enter the code number:\n";
								cin>>mealcode;
								mealfile.clear();
								mealfile.seekg(0, ios::beg);
								while(mealfile>>a>>b>>c)	//extraction operator
								{
								if(mealcode == a)	//checks if code is correct
									{
										mealname = b;
										mealvalue = c;
										return(mealvalue);
										break;
									}
								}
								cout<<"Invalid Code No.. Try Again\n";
								mm1 = 0;
							}
						break;

						case 2:
							{
								ifstream mealfile1("mealn.txt");
								int a, c;
								string b;
								if (mealfile1.is_open())
								{
									while (!mealfile1.eof())
									{
										getline(mealfile1, mealcontent);
										cout << mealcontent << endl;
									}
								}
								cout<<"Enter the code number:\n";
								cin>>mealcode;
								mealfile1.clear();
								mealfile1.seekg(0, ios::beg);
								while(mealfile1>>a>>b>>c)	//extraction operator
								{
								if(a == mealcode)	//checks if code is correct
									{
										mealname = b;
										mealvalue = c;
										return(mealvalue);
										break;
									}
								}
								cout<<"Invalid Code No. Try Again\n";
								mm1 = 0;
							}
						break;

						default:
							{
								cout<<"Invalid Choice. Please try again\n";
								mm1 = 0;
							}

					}
				}

			}while(mm1 == 0);
		}

		void pnrenquiry()
		{
			int flag2 = 1;
			char ch;
			user obj1;
			do{
			cout << "Enquiry\n";
			int a,flag=0;
			cout<<"Enter the PNR Code: \n";
			cin>>a;
			fstream file3;
			file3.open("paxdata.txt", ios::in | ios::binary);

			while(file3.read((char*)&obj1,sizeof(obj1)))	//reads from file
			{
				if(obj1.pnr == a)	//if pnr found, show data
				{
					obj1.display();	//display function is called using functions
					flag=1;
					break;
				}
			}
			
			if(flag==0)
			{
				cout<<"No record found..";
			}
			file3.close();
			cout<<"Do you want to try again or find another pnr data\n";
			cout<<"Enter 'Y' for yes\n";
			cin>>ch;
			if(ch == 'Y' || ch == 'y')
				flag2 = 0;
			}while(flag2 == 0);
			mainmenu_user();
		}

		void payment()
		{
		    long long int cardno;	//card number
			char namecard[100] = {};	//name of card
			int mm, yy, cvv, len;	//month, year of exiry, cvv code
			int t = 0;	//flag
			do{
				t = 0;
				try
				{
					cout<<"Enter Card No: \n";
					cin>>cardno;
					len = log10(cardno) + 1;
					if(len!=16)
						throw(cardno);
					else
						t++;

					cout << "Name on card " << endl;
					cin.ignore();
					cin.getline(namecard, 100);

					cout<<"Expiry Date:\n";
					cout<<"MM:\n";
					cin>>mm;
					len = log10(mm) + 1;
					if(len==1 || len == 2)
					{

						if(mm<1 || mm>12)
							throw(mm);
						else
							t++;
					}

					else
						throw(mm);

					cout<<"YYYY:\n";
					cin>>yy;
					len = log10(yy) + 1;
					if(len!=4 && yy <= 2019)
						throw(yy);
					else
						t++;

					cout<<"CVV: \n";
					cin>>cvv;
					len = log10(cvv) + 1;
					if(len!=3)
						throw(cvv);
					else
						t++;

				}

				catch(long long int)
				{
					cout<<"Invalid Card No.\n";
				}

				catch(int c)
				{
					cout<<"Invalid Date\n";
				}
			}while(t != 4);

			cout<<"Card Details\n";
			cout<<"Card Number: "<<cardno<<endl;
			cout<<"Name on Card: "<<namecard<<endl;
			cout<<"Expiry Date: "<<mm<<" / "<<yy<<endl;
			cout<<"CVV: "<<cvv<<endl;
		}
};

void user::input()
{
			int dmy2 = 0;
			do{
				dmy2 = 0;		  
				cout<<"Enter the starting place\n";
				cin>>source;
				cout<<"Enter the destination\n";
				cin>>destination;
				if(strcmp(source, "Mumbai") != 0 && strcmp(source, "Pune") != 0 && strcmp(source, "Amravati") != 0)
					{
						cout<<"Invalid Source\n";
						dmy2++;
					}
				if(strcmp(destination, "Mumbai") != 0 && strcmp(destination, "Pune") != 0 && strcmp(destination, "Amravati") != 0)
				{
						cout<<"Invalid Destination\n";
						dmy2++;
					}
					
				if(strcmp(source, destination) == 0)
				{
					cout<<"Source and Destination cannot be same\n";
					dmy2++;
				}
			}while(dmy2 != 0);
			
			int check1 = 0;
			if ((strcmp(source, "Pune") == 0 && strcmp(destination, "Mumbai") == 0)||(strcmp(source, "Mumbai") == 0 && strcmp(destination, "Pune") == 0)||(strcmp(source, "Mumbai") == 0 && strcmp(destination, "Amravati") == 0)||(strcmp(source, "Amravati") == 0 && strcmp(destination, "Mumbai") == 0)||(strcmp(source, "Pune") == 0 && strcmp(destination, "Amravati") == 0)||(strcmp(source, "Amravati") == 0 && strcmp(destination, "Pune") == 0))
			{
				do{
					dmy2 = 0;
					cout << "Enter the number of passengers" << endl;
					cin >> pnum;
					if(pnum > 10)
					{
						cout<<"Invalid No. Max Limit = 10\n";
						dmy2++;
					}
				}while(dmy2 != 0);
				
				do{
					dmy2 = 0;
					cout << "Enter f-first class or s-second class" << endl;
					cin >> clas;
					if(clas != 'f' && clas != 's')
					{
						cout<<"Invalid choice. Enter 'f' or 's' for first and second class resp.\n";
						dmy2++;
					}
				}while(dmy2 != 0);

				for (int i = 0; i < pnum; i++)
				{

					cout << "Enter the first name of "<<i+1<<" passenger"<< endl;
					cin >> name[i];
					cout << "Enter the surname of "<<i+1<<" passenger"<< endl;
					cin >> surname[i];
					cout << "Enter your age " << endl;
					cin >> age[i];
					int k;
					do {
					    k = 0;
					    int gch;
						cout << "Enter 1 for MALE" << endl << "Enter 2 for FEMALE" << endl << "Enter 3 for OTHERS" << endl;
						cin >> gch;
						switch (gch)
						{
						case 1:
						{
							cout << "MALE" << endl;
							sex[i] = "MALE";
						}
						break;
						case 2:
						{
							cout << "FEMALE" << endl;
							sex[i] = "FEMALE";
						}
						break;
						case 3:
						{
							cout << "OTHERS" << endl;
							sex[i] = "OTHERS";
						}
						break;
						default:
						{
							cout << "INVALID CHOICE" << endl;
							k = 1;
						}
					}
				} while (k == 1);
				do
				{
					k = 0;
					cout<<"Is the passenger handicapped"<<endl;
					cout<<"Enter 'Y' for yes, 'N' for no"<<endl;
					cin>>hand[i];
					if(hand[i] != 'Y' && hand[i] != 'y' && hand[i] != 'N' && hand[i] != 'n')
					{
						cout<<"INVALID CHOICE"<< endl;
						k = 1;
					}
				}while (k == 1);

				cout << "Do you wish to book a meal in your journey ?" << endl << "Enter Y for Yes or N for No" << endl;
				cin >> bmeal[i];
				if(bmeal[i] == 'Y' || bmeal[i] == 'y')
				{
					meal_price[i] = meal();
					cout<<meal_price[i]<<endl;
				}

				else
					meal_price[i] = 0;
				}

			check = 1;
			do{

				//Write logic for date(1 - 30), month(1 -12) , year
				int dmy3 = 0;
				do{
					dmy3 = 0;
					cout << "Enter Date:" << endl;
					cout<<"Day"<<endl;
					cin >> day;
					cout<<"Month"<<endl;
					cin >> month;
					if(month < 1 || month > 12)
						dmy3++;
					if(month == 2)
						if(day < 1 || day > 29)
							dmy3++;		
					if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
						if(day < 1 || day > 31)
							dmy3++;				
					else if(month == 4 || month == 6 || month == 9 || month == 11)
						if(day < 1 || day > 30)
							dmy3++;
					cout<<"Year"<<endl;
					cin >> year;
					if(year < 2019)
						dmy3++;
					if(dmy3 != 0)
						cout<<"Invalid Date\n";		
				}while(dmy3 != 0);

				std::tm time_in = { 0, 0, 0, // second, minute, hour
    			day, month, year - 1900 }; // 1-based day, 0-based month, year since 1900

  				std::time_t time_temp = std::mktime(&time_in);

  				//Note: Return value of localtime is not threadsafe, because it might be
  				// (and will be) reused in subsequent calls to std::localtime!
  				const std::tm * time_out = std::localtime(&time_temp);

  				//Sunday == 0, Monday == 1, and so on ...
  				//std::cout << "Today is this day of the week: " << time_out->tm_wday << "\n";
  				//std::cout << "(Sunday is 0, Monday is 1, and so on...)\n";
  				if(time_out->tm_wday == 2)
  					day_name = "Sun";
  				else if(time_out->tm_wday ==3)
  					day_name = "Mon";
  				else if(time_out->tm_wday == 4)
  					day_name = "Tue";
  				else if(time_out->tm_wday == 5)
  					day_name = "Wed";
  				else if(time_out->tm_wday == 6)
  					day_name = "Thu";
 				else if(time_out->tm_wday == 0)
  					day_name = "Fri";
  				else if(time_out->tm_wday == 1)
  					day_name = "Sat";

				int trainNum = trainschedule(source, destination, check);	//train_no is stored here
								
				if (std::strcmp(source, "Pune") == 0 && std::strcmp(destination, "Amravati") == 0)
                {
	                admin u1;
					fstream infile("adminpunamr.txt");	
					while(infile.read((char *)&u1,sizeof(u1)))
					{
						if(u1.train_no == trainNum)	//contents are copied to variables
						{
							train_no = u1.train_no;
							strcpy(train_name, u1.train_name);
							dep_time = u1.deptime;
							strcpy(freq, u1.freq);
							fee_f = u1.fare;
							fee_s = u1.fare1;
							break;
						}
					}
					infile.close();
                }
                
                else if (std::strcmp(source, "Amravati") == 0 && std::strcmp(destination, "Pune") == 0)
                {
	                admin u1;
					fstream infile("adminamrpun.txt");	
					while(infile.read((char *)&u1,sizeof(u1)))
					{
						if(u1.train_no == trainNum)	//contents are copied to variables
						{
							train_no = u1.train_no;
							strcpy(train_name, u1.train_name);
							dep_time = u1.deptime;
							strcpy(freq, u1.freq);
							fee_f = u1.fare;
							fee_s = u1.fare1;
							break;
						}
					}
					infile.close();
                }
                
                else if (std::strcmp(source, "Pune") == 0 && std::strcmp(destination, "Mumbai") == 0)
                {
	                admin u1;
					fstream infile("adminpunmum.txt");	
					while(infile.read((char *)&u1,sizeof(u1)))
					{
						if(u1.train_no == trainNum)	//contents are copied to variables
						{
							train_no = u1.train_no;
							strcpy(train_name, u1.train_name);
							dep_time = u1.deptime;
							strcpy(freq, u1.freq);
							fee_f = u1.fare;
							fee_s = u1.fare1;
							break;
						}
					}
					infile.close();
                }
                
                else if (std::strcmp(source, "Mumbai") == 0 && std::strcmp(destination, "Pune") == 0)
                {
	                admin u1;
					fstream infile("adminmumpun.txt");	
					while(infile.read((char *)&u1,sizeof(u1)))
					{
						if(u1.train_no == trainNum)	//contents are copied to variables
						{
							train_no = u1.train_no;
							strcpy(train_name, u1.train_name);
							dep_time = u1.deptime;
							strcpy(freq, u1.freq);
							fee_f = u1.fare;
							fee_s = u1.fare1;
							break;
						}
					}
					infile.close();
                }
                
                else if (std::strcmp(source, "Mumbai") == 0 && std::strcmp(destination, "Amravati") == 0)
                {
	                admin u1;
					fstream infile("adminmumamr.txt");	
					while(infile.read((char *)&u1,sizeof(u1)))
					{
						if(u1.train_no == trainNum)	//contents are copied to variables
						{
							train_no = u1.train_no;
							strcpy(train_name, u1.train_name);
							dep_time = u1.deptime;
							strcpy(freq, u1.freq);
							fee_f = u1.fare;
							fee_s = u1.fare1;
							break;
						}
					}
					infile.close();
                }
                
                else if (std::strcmp(source, "Amravati") == 0 && std::strcmp(destination, "Mumbai") == 0)
                {
	                admin u1;
					fstream infile("adminamrmum.txt");	
					while(infile.read((char *)&u1,sizeof(u1)))
					{
						if(u1.train_no == trainNum)	//contents are copied to variables
						{
							train_no = u1.train_no;
							strcpy(train_name, u1.train_name);
							dep_time = u1.deptime;
							strcpy(freq, u1.freq);
							fee_f = u1.fare;
							fee_s = u1.fare1;
							break;
						}
					}
					infile.close();
                }

				for (int i = 0; i < pnum; i++)
				{
					if(clas == 'f')
						fee[i] = fee_f;
					else if(clas == 's')
						fee[i] = fee_s;
				}

				int j = 0;

				while(j < pnum)
				{	if(hand[j]=='Y' || hand[j]=='y' || age[j] >= 58)
					fee[j] = concession(age[j], hand[j], fee[j]);	//concession function is called
					j++;
				}

				for(j = 0; j < pnum; j++)
				{
					fee_final[j] = fee[j] + meal_price[j];
				}

				}while(check == 0);
				//logic for pnr number ger=neration(random number generator)
				ifstream file1("number.txt");
				int data;
				file1>>data;
				file1.close();
				ofstream file2("number.txt", ios::trunc);
    			data += 1;
				file2 << data;
				file2.close();
				srand(data);
				pnr = (rand() % 8999999999)+ 1000000000;
        	}
			else
			{
				cout << "WRONG INPUTS" << endl;

			}
		}


void user::display()		//display function
{
			cout<<"\t\t\tPNR: "<<pnr<<endl;
			cout<<"\t\t\tSource: "<<source<<endl;
			cout<<"\t\t\tDestination: "<<destination<<endl;
			cout<<"\t\t\tDate: "<<day<<"/"<<month<<"/"<<year<<endl;
			cout<<"\t\t\tTrain No: "<<train_no<<endl;
			cout<<"\t\t\tTrain Name: ";
			cout<<train_name;
			cout<<endl;
			cout<<"\t\t\tDep Time: "<<dep_time<<endl;
			cout<<"\t\t\tClass: "<<clas<<endl;
			cout<<"\t\t\tNo of Pax: "<<pnum<<endl;
			cout<<setw(20)<<"Name";
			cout<<setw(20)<<"Surname";
			cout<<setw(20)<<"Age";
			cout<<setw(20)<<"Gender";
			cout<<setw(20)<<"Meal";
			cout<<setw(20)<<"Physically Challenged";
			cout<<setw(20)<<"Fee\n";
			for(int i = 0; i<pnum; i++)
			{
				cout<<setw(20)<<name[i];
				cout<<setw(20)<<surname[i];
				cout<<setw(20)<<age[i];
				cout<<setw(20)<<sex[i];
				cout<<setw(20)<<bmeal[i];
				cout<<setw(20)<<hand[i];
				cout<<setw(20)<<fee_final[i]<<endl;
			}
			cout<<"\n";
}


int main()		//main function
{
	int r;		//to be used to checking in do while loop
	do
	{
		r = 0;
		user ob1;		//user class object 
		admin ob2;		//admin class object
		int choice;
		cout << "--------------------------------" << endl;
		cout << "WELCOME TO RAILWAY RESERVATION \n";
		cout << "--------------------------------" << endl;
		cout << "Enter the mode \n";		//modes to be entered... 1, 2, 3
		cout << "1. Admin \n";
		cout << "2. User \n";
		cout << "3. Exit \n";
		cout << "--------------------------------" << endl;
		cin >> choice;
		switch (choice)
		{
			case 1:
			ob2.mainmenu_admin();		//calls main menu of class admin
			break;

			case 2:
			ob1.mainmenu_user();		//calls main menu of class admin
			break;

			case 3:
				cout<<"You have exited the application\n";
				exit(0);				//Exits the program
			break;

			default:
			{
			cout << "Invalid Choice. Try again \n";
			r = 1;
			break;
			}
		}
	} while (r == 1);
	return 0;
}
