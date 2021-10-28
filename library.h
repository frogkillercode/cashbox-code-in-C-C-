#include <iostream>
#include <string.h>
#include <string>

using namespace std;
class Store{
	
	private:
		
		string product_name;
		float sale_price;
		float buy_price;
		float profit;
	
	    int amo;
	    	   
	    int orange_s;
	    int app_s;
	    int mixed_s;
	    int french_s;
	    int toast_s;
	
	public:
		   

	
	  
	  // Variable settttttt
	   
	     void set_var(string product_name_temp , float sale_price_temp ){
	     	
	     	
		      product_name = product_name_temp;
		      sale_price = sale_price_temp;

		    
		 }	
		 
		 void print(){
		 	int i=0;
		 	cout<<"Product name: "<< product_name <<endl;
		 	cout<<"Sale price: " <<sale_price <<endl;
		 	cout<<"_________________";
		    cout<<endl; 	
		 }
		 
		 
		 
		 

	   void order_get(){
	   	
	   	int orange_s_ =0;
	    int app_s_=0;
	    int mixed_s_=0;
	    int french_s_=0;
	    int toast_s_=0;
	    
	   	int reqq;
	   	
	   	float total=0;
	   	
	   	 cout<<endl<<"0-finish"<<endl;
		 cout<<"1-Orange fresh"<<endl;
		 cout<<"2-Apple fresh"<<endl;
		 cout<<"3-Mixed fresh"<<endl;
		 cout<<"4-French sandwich"<<endl;
		 cout<<"5-Toast"<<endl;
		 
		 cout<<"-->";
		 cin>>reqq;
	  
	   	while(reqq!=0){

	     switch(reqq){
	     	case 1:
	     		
	     		cout<<"Input amount: ";
	     		cin>>amo;
	     		total +=  amo*2.5;
	     		
	     	    orange_s_ += amo;
	     	    orange_s = orange_s_;
	     	    
	     	 
	     		break;

	            case 2 :
	        	cout<<"Input amount: ";
	     		cin>>amo;
	     		total += amo*2.5;
                app_s_ += amo;
                app_s = app_s_;
	     		break;
	     	
			  case 3:
	        	cout<<"Input amount: ";
	     		cin>>amo;
	     		total +=  amo*3.5;
                mixed_s_ += amo;
                mixed_s = mixed_s_;
	     		break;	
	     		
	     		 case 4:
	        	cout<<"Input amount: ";
	     		cin>>amo;
	     		total +=  amo*3.0;
                french_s_ += amo;
                french_s = french_s_;
	     		break;
			 		
			 	 case 5:
	        	cout<<"Input amount: ";
	     		cin>>amo;
	     		total +=  amo*2.5;
	     		toast_s_ += amo;
	            toast_s = toast_s_;
	     		break;	
		 }
		 
		 cout<<endl<<"0-finish"<<endl;
		 cout<<"1-Orange fresh"<<endl;
		 cout<<"2-Apple fresh"<<endl;
		 cout<<"3-Mixed fresh"<<endl;
		 cout<<"4-French sandwich"<<endl;
		 cout<<"5-Toast"<<endl;
		 
		 cout<<"-->";
		 cin>>reqq;
		
	    }
	    
	        cout<<"Total price is: "<<total<<"$"<<endl;
	        profit +=total;
	 }
	 
	 
	 void get_profit_day(){
	 	cout <<endl<<"#####################"<<endl;
	 	cout <<"Total profit for today is: "<< profit<<"$"<<endl;
	 	cout<<"#####################"<<endl;
	 }
	 
	 
	 void get_amount(){
	 	cout<<"Orange freshes: "<< orange_s<<endl;
	 	cout<< "Apple freshes: " <<app_s<<endl;
	 	cout<< "Mixed freshes: " <<mixed_s<<endl;
	 	cout<< "French sandwiches: " <<french_s<<endl;
	 	cout<< "Toasts: " <<toast_s<<endl;
	 }
	 

	 
	 

	
		 static int choise (){
		 	
		 	int req;
		 	cout<<endl<<"Press 0 to finish"<<endl;
		 	cout << "Press 1 for getting all menu"<<endl;
		 	cout << "Press 2 for adding an order"<<endl;
		 	cout << "Press 3 for getting total profit for day"<<endl;
		 	cout << "Press 4 for getting amount of sold products for day "<<endl;
		 	
		 	cout<<"-->";
		 	cin>> req;
		 	return req;
		 	
		 }
};
