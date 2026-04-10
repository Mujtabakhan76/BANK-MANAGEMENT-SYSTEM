#include <iostream>
using namespace std;
class Account{
private:
	string name;
	int long long Id_no;
	string mob_no;
	string pin_cod;
	double account_balance; 
	int age;
	 public:
	 	
	 	//  account main data
	 	
	 	void data(){
			cout<<"1: CTREAT ACCOUNT."<<endl;
				cout<<"2: LOGIN ACCOUNT."<<endl;
					cout<<"3: DEPOSITE MONEY."<<endl;
						cout<<"4: SEND MONEY."<<endl;
							cout<<"5: TRANSACTION HISTORY."<<endl;
		}
		
	 // Member function for printing user main data 
	 
		void User_data() const{
		
			cout<<"Enter Data :"<<endl;
			cout<<"1:  Your Name:----------"<<endl;
			cout<<"2:  You ID_Number:-----------"<<endl;
			cout<<"3:  Your Phone_Number:03xxxxxxxxx"<<endl;
			cout<<"4:  YOUR PIN_CODE:"<<endl;
			cout<<"5:  Your  Age :"<<endl;
		}

		//getting data from user and store in data members 
		void get_data1(){
		cout<<"ENTER NAME :";
		cin>>name;
	
		cout<<"ENTER ID_NUMBER :";
		cin>>Id_no;
		
		cout<<"ENTER PHONE_NUMBER :";
		cin>>mob_no;
		cout<<"ENTER 5 DIGIT PIN_CODE :";
		cin>>pin_cod;
		cout<<"ENTER YOUR AGE:";
	    cin>>age;
}

    // constructor for intializing the balance zero
    
	Account(){
		account_balance=0;
	}
	
	//member function for sign data 
	
	 void sign_in_account(){
	 	cout<<"=============PLEASE ENTER YOUR ACCOUNT DATA FOR SIGN IN ================"<<endl;
	 		cout<<"1:  Your Name:----------"<<endl;
			cout<<"2:  You ID_Number:-----------"<<endl;
				cout<<"3:  YOUR PIN_CODE:"<<endl;
					cout<<" "<<endl;
	 	cout<<"ENTER NAME :";
	 	cin>>name;
	 	cout<<"ENTER ID_NUMBER :";
	 	cin>>Id_no;
	 	cout<<"ENTER YOUR PIN CODE :";
	 	cin>>pin_cod;
	 		cout<<" "<<endl;
	 		cout<<"=======YOU HAVE SUCCESSFULLY LOGIN TO YOUR ACCOUNT========"<<endl;
	 			cout<<" "<<endl;
	 				cout<<" "<<endl;
	 		cout<<"                 ----YOUR ACCOUNT DATA----     "<<endl;
	 		cout<<"NAME :GHULAM MUJTABA              ID_NUMBER:"<<Id_no<<"               AACOUNT BALANCE ="<<account_balance<<endl;
	 			cout<<" "<<endl;
	 				cout<<" "<<endl;
	 		cout<<"---------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
			 	cout<<" "<<endl;	
	 }
	 //member function for selecting amount 
	 
	 void money(){
	 	cout<<"=========================SELECT AMOUNT========================== "<<endl;
	 	int a=5000, b=10000, c=15000,d=20000,e=25000;
	 	int amount;
	   cout<<" "<<endl;
	   cout<<"1)."<<a<<"        2)."<<b<<"        3)."<<c<<"          4)."<<d<<"            5)."<<e<<endl;  
	   	cout<<" "<<endl;
	   	   	cout<<" "<<endl;
	   cout<<"ENTER AMOUNT FOR DEPOSIT :";
	   cin>>amount;	
	   	 	if(amount<0){
	 		cout<<"INVALID AMOUNT "<<endl;
		 }
		 else{
		 	account_balance=account_balance+amount;
		 	cout<<"YOU DEPOSIT "<<amount<<" PKR"<<endl;
		 	cout<<"YOUR ACCOUNT BALANCE IS :"<<account_balance<<endl;
		 }
	 }
	 
	 //member function for depositing money 
	 
	 void Deposit_Money(){
       cout<<"--CONGRATULATIONS YOUR DEPOSIT HAS BEEN COMPLETED--"<<endl;
       		cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	 }
	 
	 
	 
	 
	 // for sending money to other
	 string receiver_address;
	 
	 void send_money(){
	 	cout<<"================SEND MONEY=================="<<endl;
	 	cout<<"ENTER RECEIVER DATA:"<<endl;
	 	cout<<"1:NAME------------:"<<endl;
	 	cout<<"2:PHONE NUMBER :03xxxxxxxxx"<<endl;
	 	cout<<"3:RECEIVER ADDRESS :"<<endl; 
	 	int option;
	 		cout<<" "<<endl;
	 		cout<<"ENTER NAME :";
	 			 
	 	    cin>>name;
	 	cout<<"ENTER PHONE NUMBER:";
	 	cin>>mob_no;
	 	cout<<"ENTER RECEIVER ADDRESS :";
	 	cin>>receiver_address;
	 			cout<<" "<<endl;
	 			
	 			cout<<"------------------SELECT ACCOUNT-------------------"<<endl;
	 				cout<<" "<<endl;
	 				
	 			
				 	cout<<"1).EASYPAISA          2).JAZZCASH           3).BANK ALFALAH             4).BANK OF KHYBER              5).OTHER"<<endl;
	 	cout<<"SELECT ACCOUNT TYPE :";
	 	cin>>option;
		 if(option==1){
	 		cout<<"USER SELECTED EASPAISA."<<endl;
		 }
		 else if(option==2){
		 	cout<<"USER SELECTED JAZZCASH."<<endl;
		 }
		 	 else if(option==3){
		 	cout<<"USER SELECTED BANK ALFALAH."<<endl;
		 }
		 	 else if(option==4){
		 	cout<<"USER SELECTED BANK OF KHYBER."<<endl;
		 }
		 	 else if(option==5){
		 	cout<<"USER SELECTED OTHER OPTION."<<endl;
		 }
		 
		 else{
		 	cout<<"USER ENTERED INVALID ACCOUNT."<<endl;
		 }
		 
		 // for selecting amount 
		 
		 	cout<<"=========================SELECT AMOUNT========================== "<<endl;
	 	int a=5000, b=10000, c=15000,d=20000,e=25000;
	 	int amount;
	   cout<<" "<<endl;
	   cout<<"1)."<<a<<"        2)."<<b<<"        3)."<<c<<"          4)."<<d<<"            5)."<<e<<endl;  
	   	cout<<" "<<endl;
	   	   	cout<<" "<<endl;
	   	   	cout<<"SELECT AMOUNT :";
	   	   	cin>>amount;
				if(option==1){
	 		cout<<"USER SELECTED ."<<a<<" PKR"<<endl;
		 }
		 else if(option==2){
		 		cout<<"USER SELECTED ."<<b<<" PKR"<<endl;
		 }
		 	 else if(option==3){
		 		cout<<"USER SELECTED ."<<c<<" PKR"<<endl;
		 }
		 	 else if(option==4){
		 	cout<<"USER SELECTED ."<<d<<" PKR"<<endl;
		 }
		 	 else if(option==5){
		 	cout<<"USER SELECTED ."<<e<<" PKR"<<endl;
		 }
		 
		 else{
		 	cout<<"USER ENTERED INVALID AMOUNT."<<endl;
		 }	  
		
		if(amount<=account_balance){
			account_balance=account_balance-amount;
			cout<<"YOU SEND :"<<amount<<" PKR."<<endl;
			cout<<"YOUR PRESENT ACCOUNT BALANCE IS :"<<account_balance<<endl;
		}
		 cout<<" "<<endl;
		  cout<<" "<<endl;
		cout<<"===================MONEY SEND SUCCESSFULLY======================"<<endl;		  		 
	 }
};
//class end 

//main portion start 
int main() {
	cout<<"===============AUTHOR : GHULAM MUJTABA KHAN ================"<<endl;
	cout<<"==================EasyPaisa App Domi================="<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	

		
	// creating object 
	Account mujtaba;
		cout<<"==========(Nem Users)SELECT 1st OPTION==========="<<endl;
	cout<<"NOTE: (If You Have Already Registered Then Select Anyone)."<<endl;
	mujtaba.data();
    	cout<<" "<<endl;
    		//  selecting options 
	
			int option; 
			cout<<"SELECT OPTION:";
			cin>>option;
		
		  
		
	//function call(accessing member fuction) 
	cout<<"==USER ENTERED 1ST OPTION==."<<endl; 
		cout<<"---PLEASE SIGN UP ACCOUNT---"<<endl;
		if(option==1){
				mujtaba.User_data(); 
			}
		cout<<" "<<endl;
	cout<<" "<<endl;
	
	//Accessing another function 
    mujtaba.get_data1();
    	cout<<" "<<endl;
    	cout<<"                ===========CONGRATULATIONS===========            "<<endl;
		cout<<"      ==========YOUR ACCOUNT HAS BEEN SUCCESSFULLY CREATED=========         "<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
	
	// call for sign in 
    mujtaba.data();
    cout<<""<<endl;
    cout<<"SELECT OPTION :";
    cin>>option;
      //call for sign in 
   
    if(option==2){
    	cout<<"              --------USER ENTERED OPTION 2------------         " 	<<endl;
    	 mujtaba.sign_in_account();
	}
	cout<<"              --------USER ENTERED OPTION 3------------         " 	<<endl;
	cout<<" "<<endl;
    
  
    
    //for deposit money 
    mujtaba.data();
     cout<<""<<endl;
    cout<<"SELECT OPTION :";
    cin>>option;
      //call for sign in 
   
    if(option==3){
    cout<<"USER SELECT 3RD OPTION "<<endl;
    
    mujtaba.money();
    mujtaba.Deposit_Money();
}
 // for sending money
 cout<<"SELECT ANYONE OPTION:"<<endl;
 mujtaba.data();
  if(option==4){
    cout<<"USER SELECT FOURTH OPTION "<<endl;
}
    mujtaba.send_money();


	return 0;
}